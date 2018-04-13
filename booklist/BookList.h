#ifndef BOOKLIST_H
#define BOOKLIST_H
#include "BookNode.h"
#include <string>
using namespace std;

/**
 * A list of book nodes.
 */
class BookList
{
public:
    /**
     * Constructor.
     * @param name the name of this list.
     */
    BookList(const string name);

    /*
     * creates a booklist
     */
    void create();

    /*
     * merges all booklists
     */
    void merge();

    /*
     * merges accoridng to the condition of last name
     */
    void last1();
    void last2();

//    /*
//     * sorts according to the last name
//     */
//    void sort_last_A_M(BookNode* bn);
//
//    void sort_last_N_Z(BookNode* bn);

    /*
     * sorts and inserts booknodes into the list
     */
    void sort_insert(BookNode *bn); //, BookNode* start);

    /**
     * Prints the list.
     */
    void print();


    /***** Complete this class. *****/

private:
    string name;      // name of this book list
    BookNode *head;   // head of the list of book nodes
    BookNode *tail;   // tail of the list of book nodes
};

#endif /* BOOKLIST_H_ */
