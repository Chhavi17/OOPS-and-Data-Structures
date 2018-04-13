
#ifndef NODE_H_
#define NODE_H_

#include "Element.h"

class Node {
public:
	Node();
	Node(Element);
	virtual ~Node();
// data members
	Element element;
	Node* next;
};

#endif /* NODE_H_ */
