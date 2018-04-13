#include <string>
#include <fstream>
#include <iostream>
#include "Book.h"
#include "BookNode.h"
#include "BookList.h"

using namespace std;

const string CATEGORIES_FILE_NAME = "/Users/chhavi/Desktop/categories.txt";



/**
 * The main. Create and print the book lists.
 */
int main()
{
    /***** Complete this main. *****/

	ifstream in;

	in.open(CATEGORIES_FILE_NAME);

	if(in.fail())
	{
		cout << "Failed to open" << CATEGORIES_FILE_NAME << endl;
		return -1;
	}

	int c=0;

	while(!in.fail() && c<4)
	{
		c++;
		string category;
		in >> category;
		cout << "Book list: " << category << endl << endl;
		BookList bl(category);

		bl.create();
		bl.print();

	}
	BookList merged("MERGED");
			merged.merge();
			cout << "Book list: MERGED" << endl << endl;
			merged.print();

	BookList authors1("A_M");
	cout << "Book list: AUTHORS A_M" << endl << endl;
	authors1.last1();



		BookList authors2("N_Z");
		cout << "Book list: AUTHORS N_Z" << endl << endl;
			authors2.last2();




    return 0;
}

/***** Complete this file. *****/
