/*
 * SortedList.cpp
 *
 *  Created on: Oct 26, 2017
 *      Author: chhavi
 */




#include <iostream>
#include <iterator>
#include "SortedList.h"

using namespace std;

SortedList::SortedList()
{
    Node::reset();
}

SortedList::~SortedList()
{
    Node::reset();
}

int SortedList::size() const { return data.size(); }

bool SortedList::check()
{
    if (data.size() == 0) return true;

    list<Node>::iterator it = data.begin();
    list<Node>::iterator prev = it;

    it++;

    // Ensure that each node is greater than the previous node.
    while ((it != data.end()) && (*it > *prev))
    {
        prev = it;
        it++;
    }

    return it == data.end();  // Good if reached the end.
}

void SortedList::prepend(const long value)
{
    /***** Complete this function. *****/
	Node n(value);
	data.push_front(n);
}

void SortedList::append(const long value)
{
    /***** Complete this function. *****/
	Node n(value);
	data.push_back(n);
}

void SortedList::remove(const int index)
{
    /***** Complete this function. *****/
	 list<Node>::const_iterator it = data.begin();
     advance(it,index);
     data.erase(it);

}

void SortedList::insert(const long value)
{
    /***** Complete this function. *****/
}

Node SortedList::at(const int index)
{
    /***** Complete this function. *****/
	list<Node>::const_iterator it = data.begin();
	advance(it,index);
	return *it;
}
