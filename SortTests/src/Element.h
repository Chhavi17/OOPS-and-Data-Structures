/*
 * Element.h
 *
 *  Created on: Nov 14, 2017
 *      Author: chhavi
 */

#ifndef DATA_H_
#define DATA_H_

#include <iostream>
using namespace std;

/**
 * The class for the data elements that will be sorted.
 */
class Element
{
public:
	// for keeping count of constructors and destrcutors
	static long copy_count, destructor_count;

	/*
	 * constructors and destructors
	 */
    Element();
    Element(long val);
    Element(const Element& other);
    virtual ~Element();

    /*
     * resets constructor and destructor values
     */
    static void reset();

    /*
     * operator overloading
     */
    friend bool operator <(const Element& e1, const Element& e2);
    friend bool operator >(const Element& e1, const Element& e2);
    friend bool operator ==(const Element& e1, const Element& e2);
    friend ostream& operator <<(ostream& out, const Element& e);

    /*
     * getter functions
     */
    static long get_copy_count() ;
    static long get_destructor_count() ;
    long get_value() const;



private:
    long value;
};

#endif /* DATA_H_ */
