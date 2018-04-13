#include <iostream>
#include "BinaryTreeChecker.h"

using namespace std;

BinaryTreeChecker::BinaryTreeChecker(BinarySearchTree& tree)
    : tree(tree)
{
    cache.clear();
}

BinaryTreeChecker::~BinaryTreeChecker()
{
}

void BinaryTreeChecker::clear()
{
    cache.clear();
}

void BinaryTreeChecker::add(const int data)
{
    cache.insert(data);
}

void BinaryTreeChecker::remove(const int data)
{
    cache.erase(data);
}

TreeStatus BinaryTreeChecker::check(bool do_dump)
{
    data.clear();
    walk(tree.getRoot());

    return compare(do_dump);
}

void BinaryTreeChecker::walk(BinaryNode *node)
{
    if (node == nullptr) return;

    walk(node->left);
    data.insert(node->data);
    walk(node->right);
}

TreeStatus BinaryTreeChecker::compare(bool do_dump)
{
    typename set<int>::iterator itCache;
    typename set<int>::iterator itData;

    itCache = cache.begin();
    itData  = data.begin();

    if (do_dump) cout << endl;

    while (itCache != cache.end())
    {
        if (itData == data.end()) return TreeStatus::INSUFFICIENT_DATA;
        if (do_dump) cout << *itData << ":" << *itCache << " ";
        if (*itCache != *itData) return TreeStatus::DATA_MISMATCH;

        itCache++;
        itData++;
    }

    if (do_dump) cout << endl;
    if (itData != data.end()) return TreeStatus::REMAINING_DATA;

    return TreeStatus::NO_ERROR;
}

ostream& operator <<(ostream& out, const TreeStatus& status)
{
	int i;
	if(status == TreeStatus::NO_ERROR)
		i=1;
	if(status == TreeStatus::DATA_MISMATCH)
			i=2;
	if(status == TreeStatus::INSUFFICIENT_DATA)
			i=3;
	if(status == TreeStatus::REMAINING_DATA)
			i=4;

    switch (status)
    {
        case 1:
        {
            out << ">>>>> The tree is now empty.";
            return out;
        }
        case 2:
        {
            out << ">>>>> Data mismatch.";
            return out;
        }
        case 3:
        {
            out << ">>>>> Data missing from tree.";
            return out;
        }
        case 4:
        {
            out << ">>>>> Data remaining in tree.";
            return out;
        }
    }
}
