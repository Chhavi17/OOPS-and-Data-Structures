/*
 * BookNode.cpp
 *
 *  Created on: Oct 14, 2017
 *      Author: chhavi
 */

#include "Book.h"
#include "BookNode.h"
#include "BookList.h"
#include <fstream>


BookNode::BookNode(Book b)
{
	book = b;
	next = nullptr;
}

void BookNode::setNext(BookNode* next)
{
	this->next = next;
}



Book BookNode::get_book()
{
	return book;
}

BookNode* BookNode::getNext()
{
	return next;
}

string BookNode::get_bookISBN(Book b)
{
	return b.get_isbn();

}



