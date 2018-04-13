/*
 * Node.cpp
 *
 *  Created on: Nov 14, 2017
 *      Author: chhavi
 */

#include "Node.h"

#include "Element.h"

/*
 * constructors
 */
Node::Node() {
 element = 0;
 next = nullptr;
}

Node::Node(Element e){
 element = e	;
 next = nullptr;
}

/*
 * destructor
 */
Node::~Node() {

}

