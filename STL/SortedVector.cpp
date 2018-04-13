/*
 * SortedVector.cpp
 *
 *  Created on: Oct 26, 2017
 *      Author: chhavi
 */

#include <iostream>
#include <iterator>
#include <vector>
#include "SortedVector.h"

using namespace std;

SortedVector::SortedVector()
{
    Node::reset();
}

SortedVector::~SortedVector()
{
    Node::reset();
}

int SortedVector::size() const { return data.size(); }

bool SortedVector::check() const
{
    if (data.size() == 0) return true;

    vector<Node>::const_iterator it = data.begin();
    vector<Node>::const_iterator prev = it;

    it++;

    // Ensure that each node is greater than the previous node.
    while ((it != data.end()) && (*it > *prev))
    {
        prev = it;
        it++;
    }

    return it == data.end();  // Good if reached the end.
}

void SortedVector::prepend(const long value)
{
    /***** Complete this function. *****/

    data.insert(data.begin(), value);
}

void SortedVector::append(const long value)
{
    /***** Complete this function. *****/
//	Node* n = new Node(value);
	data.push_back(value);
}

void SortedVector::remove(const int index)
{
    /***** Complete this function. *****/
	 vector<Node>::const_iterator it = data.begin();
	 data.erase(it+index);

}

void SortedVector::insert(const long value)
{
    /***** Complete this function. *****/
//	Node* n = new Node(value);
//	vector<Node>::const_iterator it = data.begin();
//	while(it!=(index-1))
//		it++;
//	vector<Node>::const_iterator next = it++;
//	*next = *it;
//    data.insert(it,*n);
//    it++;
//    while(next!=data.end())
//    {
//    	  *it=*next;
//    	  next++;
//    	  it++;
//    }


}

Node SortedVector::at(const int index) const
{
    /***** Complete this function. *****/
	return data.at(index);
}



