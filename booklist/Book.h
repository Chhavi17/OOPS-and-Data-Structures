#ifndef BOOK_H_
#define BOOK_H_
#include <string>
using namespace std;
/**
 * The Book class.
 */
class Book
{
  public:
	/*
	 * Default constructor
	 */
	Book();

	/*
	 * Parameterized constructor
	 */
	Book(string isbn,string last, string first, string title);

	void set(string isbn,string last, string first, string title);

	/*
	 * returns isbn
	 */
	string get_isbn();

	/*
	 * returns last
	 */
	string get_last();

	/*
	 * returns first
	 */
	string get_first();

	/*
	 * retruns title
	 */
	string get_title();


	/*
	 * friend operator << overloading
	 */
	friend ostream& operator <<(ostream& out, Book& b);

	/*
	 * friend operator >> overloading
	 */
	friend istream& operator >>(istream& in, Book& b);

  private:
	string isbn,last,first,title;

};

#endif /* BOOK_H_ */
