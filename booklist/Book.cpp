/*
 * Book.cpp
 *
 *  Created on: Oct 14, 2017
 *      Author: chhavi
 */

#include "Book.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Book::Book() : isbn(""),last(""),first(""),title("") {}

Book::Book(string _isbn,string _last,string _first,string _title)
{
	isbn=_isbn;
	last=_last;
	first=_first;
	title=_title;
}

void Book::set(string _isbn,string _last,string _first,string _title)
{
	isbn=_isbn;
	last=_last;
	first=_first;
	title=_title;
}

string Book::get_isbn()
{
	return isbn;
}


string Book::get_last()
{
	return last;
}


string Book::get_first()
{
	return first;
}


string Book::get_title()
{
	return title;
}

istream& operator >>(istream& in, Book& b)
{
	// get spaces?
	string in1,in2,in3,in4;
	getline(in,in1,',');
	getline(in,in2,',');
	getline(in,in3,',');
	getline(in,in4,'\n');
	b.set(in1,in2,in3,in4);

	return in;
}

ostream& operator <<(ostream& out, Book& b)
{
	cout << "Book{ISBN=" << b.get_isbn() << ", last=" << b.get_last() << ", first=" << b.get_first() << ", title=" << b.get_title() <<"}";
	return out;
}
//operator overloading function







