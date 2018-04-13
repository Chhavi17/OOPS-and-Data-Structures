#include <iostream>
#include "AvlTree.h"

using namespace std;

AvlTree::AvlTree()
    : BinarySearchTree()
{
}

AvlTree::~AvlTree()
{
}

int AvlTree::height(const BinaryNode *ptr) const
{
    return ptr == nullptr ? -1 : ptr->height;
}

void AvlTree::insert(const long data, BinaryNode* &ptr)
{

    BinarySearchTree::insert(data, ptr);
    rebalance(ptr);
}

void AvlTree::remove(const long data, BinaryNode* &ptr)
{
    BinarySearchTree::remove(data, ptr);
    rebalance(ptr);
}

BinaryNode *AvlTree::rebalance(BinaryNode* &ptr)
{

//    cout << "=== Rebalance called on "
//         << (ptr != nullptr ? to_string(ptr->data) : "null")
//         << endl;

    BinaryNode* left = ptr->left;
    BinaryNode* right = ptr->right;
    int l_height = height (ptr->left);
    int r_height = height (ptr->right);
    int b_factor= l_height - r_height;

    //left is higher than 1
    if (b_factor > 1)
      {
    	      //left child is high
          if ((height(left->left)-height(left->right)) > 0)
          {
        	     ptr = singleRightRotation (ptr);
        	     cout << "    --- Single right rotation at node " << ptr->data << endl;
          }
          //right child is high
          else
          {
        	      ptr = doubleLeftRightRotation (ptr);
        	      cout << "    --- Double left-right rotation at node "  << ptr->data << endl;
          }

      }

      // right is higher than 1
      else if (b_factor < -1)
      {
    	      //left child is high
          if ((height(right->left)-height(right->right)) > 0)
          {
        	      ptr = doubleRightLeftRotation (ptr);
              cout << "    --- Double right-left rotation at node "<< ptr->data << endl;
          }
          //right child is high
          else
          {
        	    ptr = singleLeftRotation (ptr);
            cout << "    --- Single left rotation at node " << ptr->data << endl;
          }

      }

    // Recompute the node's height.
     ptr->height = max(height(ptr->left),height(ptr->right))+1;

    if (checkBalance(ptr) < 0)
    {
       // cout << endl << "***** Tree unbalanced!" << endl;
    }

    return ptr;
}

//referred from : http://www.sanfoundry.com/cpp-program-implement-avl-trees/

BinaryNode *AvlTree::singleRightRotation(BinaryNode *k2)
{
    BinaryNode *temp;
    temp = k2->left;
    k2->left = temp->right;
    temp->right = k2;
    return temp;
    k2->height = max(height(k2->left),height(k2->right))+1;
    temp->height = max(height(temp->left),height(temp->right))+1;
}

BinaryNode *AvlTree::doubleLeftRightRotation(BinaryNode *k3)
{
    BinaryNode *temp;
    temp = k3->left;
    k3->left = singleLeftRotation (temp);
    return singleRightRotation (k3);
}

BinaryNode *AvlTree::doubleRightLeftRotation(BinaryNode *k1)
{
	   BinaryNode *temp;
	    temp = k1->right;
	    k1->right = singleRightRotation (temp);
	    return singleLeftRotation (k1);
}

BinaryNode *AvlTree::singleLeftRotation(BinaryNode *k1)
{
    BinaryNode *temp;
    temp = k1->right;
    k1->right = temp->left;
    temp->left = k1;
    k1->height = max(height(k1->left),height(k1->right))+1;
    temp->height = max(height(temp->left),height(temp->right))+1;
    return temp;
}

int AvlTree::checkBalance(BinaryNode *ptr)
{
    if (ptr == nullptr) return -1;

    int leftHeight  = checkBalance(ptr->left);
    int rightHeight = checkBalance(ptr->right);

    if ((abs(height(ptr->left) - height(ptr->right)) > 1)
        || (height(ptr->left)  != leftHeight)
        || (height(ptr->right) != rightHeight))
    {
        return -2;       // unbalanced
    }

    return height(ptr);  // balanced
}
