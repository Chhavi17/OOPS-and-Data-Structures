/*
 * Element.cpp
 *
 *  Created on: Nov 14, 2017
 *      Author: chhavi
 */

#include <iostream>
#include "Element.h"

using namespace std;

long Element::copy_count;
long Element::destructor_count;
//long Element::get_copy_count();
//long Element::get_destructor_count();

/**
 * Default constructor.
 */
Element::Element() : value(0) {

}

/**
 * Constructor.
 * @param val the element's value.
 */
Element::Element(long val) : value(val) {

}

/**
 * Copy constructor.
 * @param other the other element to be copied.
 */
Element::Element(const Element& other)
{
	value = other.value;
    copy_count++;
}

/**
 * Destructor.
 */
Element::~Element()
{
    destructor_count++;
}

void Element::reset()
{
	copy_count = 0;
	destructor_count = 0;
}

/*
 * operator overloading
 */
bool operator <(const Element& e1, const Element& e2)
{
	return e1.value < e2.value;
}

bool operator >(const Element& e1, const Element& e2)
{
	return e1.value > e2.value;
}

bool operator ==(const Element& e1, const Element& e2)
{
	return e1.value == e2.value;
}

ostream& operator <<(ostream& out, const Element& e)
{
	out << e.value;
	return out;
}


/**
 * Getter.
 * @return the value.
 */
long Element::get_value() const { return value; }

long Element::get_copy_count()  { return copy_count; }

long Element::get_destructor_count()  { return destructor_count; }
