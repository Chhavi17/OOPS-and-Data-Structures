#ifndef BOOKNODE_H_
#define BOOKNODE_H_

#include "Book.h"

/**
 * A book node in a linked list.
 */
class BookNode
{
public:
    /**
     * Constructor.
     * @param book this node's book.
     */
    BookNode(Book book);

    /*
     * getter functions
     */
    BookNode* getNext();

    Book get_book();

     string get_bookISBN(Book b);

     /*
      * setter functions
      */

    void setNext(BookNode* next);

    void setBook(Book b);

    void setNext(BookNode next);

    /*
     * creates a book node
     */
    void create();

    /***** Complete this class. *****/

private:
    Book book;       // this node's book
    BookNode *next;  // link to the next node in the list
};

#endif /* BOOKNODE_H_ */
