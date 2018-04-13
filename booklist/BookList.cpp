#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include "Book.h"
#include "BookNode.h"
#include "BookList.h"

const string CHILDREN_FILE_NAME = "/Users/chhavi/Desktop/childrens.txt";
const string HISTORY_FILE_NAME = "/Users/chhavi/Desktop/history.txt";
const string SCIENCE_FILE_NAME = "/Users/chhavi/Desktop/science.txt";
const string MYSTERY_FILE_NAME = "/Users/chhavi/Desktop/mystery.txt";


BookList::BookList(string name)
    : name(name), head(nullptr), tail(nullptr)
{

}

void BookList::create()
{

	//BookNode* n = new BookNode;
	ifstream infile;
	if(name == "childrens")
		infile.open(CHILDREN_FILE_NAME);
	else if(name == "history")
			infile.open(HISTORY_FILE_NAME);
	else if(name == "science")
			infile.open(SCIENCE_FILE_NAME);
	else if(name == "mystery")
			infile.open(MYSTERY_FILE_NAME);


		if(infile.fail())
		{
			cout << "!!!failed to open the file" << endl;
		}
		else
		{

			while(!infile.eof())
		    {
			   Book b;
		    	   infile >> b;

		    	   sort_insert(new BookNode(b));

		    }

		}
}

void BookList::sort_insert(BookNode *bn)
{

	if(head == nullptr)
	{
		   head = bn;

	}
	else if(bn->get_book().get_isbn() < head->get_book().get_isbn())
	{
	    	    //smaller than first";
	    	    (bn)->setNext(head);
	    	    head = bn;
	}
	else
	{
			   BookNode* t1 = head;
			   BookNode* t2 = t1;

		       while((t2 != nullptr) && (bn->get_book().get_isbn() > t2->get_book().get_isbn())
		    		   && (bn->get_book().get_isbn() != t2->get_book().get_isbn()) )
		 	   {

						  		   t1=t2;
				 		  		   t2=t2->getNext();

		  	   }
		       if((bn->get_book().get_isbn() == t1->get_book().get_isbn()) )
		    	     return;
			      t1->setNext(bn);
			      bn->setNext(t2);


	      }
}


void BookList::merge()
{
	vector<BookNode*> list;
	ifstream infile1,infile2,infile3,infile4;
	infile1.open(SCIENCE_FILE_NAME);
	if(infile1.fail())
	{
		cout << "!!!failed to open the file" << endl;
	}
	else
	{
		while(!infile1.eof())
	    {
		   Book b;
	   	   infile1 >> b;
	   	   BookNode* x = new BookNode(b);
	   	   list.push_back(x);
	    }
	}

	infile2.open(HISTORY_FILE_NAME);
		if(infile2.fail())
		{
			cout << "!!!failed to open the file" << endl;
		}
		else
		{
			while(!infile2.eof())
		    {
			   Book b;
		   	   infile2 >> b;
		   	   BookNode* x = new BookNode(b);
		   	   list.push_back(x);
		    }
		}

	infile3.open(MYSTERY_FILE_NAME);
		if(infile3.fail())
		{
			cout << "!!!failed to open the file" << endl;
		}
		else
		{
			while(!infile3.eof())
		    {
			   Book b;
		   	   infile3 >> b;
		   	   BookNode* x = new BookNode(b);
		   	   list.push_back(x);
		    }
		}


    infile4.open(CHILDREN_FILE_NAME);
    	if(infile4.fail())
    	{
    		cout << "!!!failed to open the file" << endl;
    	}
    	else
    	{
    		while(!infile4.eof())
    	    {
    		   Book b;
    	   	   infile4 >> b;
    	   	   BookNode* x = new BookNode(b);
    	   	   list.push_back(x);
    	    }
    	}
    for(int i=0; i<list.size();i++)
    {
    	   sort_insert(list[i]);
    }

}

void BookList::last1()
{
	vector<BookNode*> list;
		ifstream infile1,infile2,infile3,infile4;
		infile1.open(SCIENCE_FILE_NAME);
		if(infile1.fail())
		{
			cout << "!!!failed to open the file" << endl;
		}
		else
		{
			while(!infile1.eof())
		    {
			   Book b;
		   	   infile1 >> b;
		   	   BookNode* x = new BookNode(b);
		   	if(x->get_book().get_last()>="A" && x->get_book().get_last()<="M")
		   	   list.push_back(x);
		    }
		}

		infile2.open(HISTORY_FILE_NAME);
			if(infile2.fail())
			{
				cout << "!!!failed to open the file" << endl;
			}
			else
			{
				while(!infile2.eof())
			    {
				   Book b;
			   	   infile2 >> b;
			   	   BookNode* x = new BookNode(b);
			   	if(x->get_book().get_last()>="A" && x->get_book().get_last()<="M")
			   	   list.push_back(x);
			    }
			}

		infile3.open(MYSTERY_FILE_NAME);
			if(infile3.fail())
			{
				cout << "!!!failed to open the file" << endl;
			}
			else
			{
				while(!infile3.eof())
			    {
				   Book b;
			   	   infile3 >> b;
			   	   BookNode* x = new BookNode(b);
			   	if(x->get_book().get_last()>="A" && x->get_book().get_last()<="M")
			   	   list.push_back(x);
			    }
			}


	    infile4.open(CHILDREN_FILE_NAME);
	    	if(infile4.fail())
	    	{
	    		cout << "!!!failed to open the file" << endl;
	    	}
	    	else
	    	{
	    		while(!infile4.eof())
	    	    {
	    		   Book b;
	    	   	   infile4 >> b;
	    	   	   BookNode* x = new BookNode(b);
	    	   	if(x->get_book().get_last()>="A" && x->get_book().get_last()<="M")
	    	   	   list.push_back(x);
	    	    }
	    	}
	        for(int i=0; i<list.size();i++)
	        {
	        	  Book j = list[i]->get_book();
	        	  cout << j << endl;

	        }

}


void BookList::last2()
{
	vector<BookNode*> list;
		ifstream infile1,infile2,infile3,infile4;
		infile1.open(SCIENCE_FILE_NAME);
		if(infile1.fail())
		{
			cout << "!!!failed to open the file" << endl;
		}
		else
		{
			while(!infile1.eof())
		    {
			   Book b;
		   	   infile1 >> b;
		   	   BookNode* x = new BookNode(b);
		   	if(x->get_book().get_last()>="N" && x->get_book().get_last()<="Z")

		   	   list.push_back(x);
		    }
		}

		infile2.open(HISTORY_FILE_NAME);
			if(infile2.fail())
			{
				cout << "!!!failed to open the file" << endl;
			}
			else
			{
				while(!infile2.eof())
			    {
				   Book b;
			   	   infile2 >> b;
			   	   BookNode* x = new BookNode(b);
			   	if(x->get_book().get_last()>="N" && x->get_book().get_last()<="Z")
			   	   list.push_back(x);
			    }
			}

		infile3.open(MYSTERY_FILE_NAME);
			if(infile3.fail())
			{
				cout << "!!!failed to open the file" << endl;
			}
			else
			{
				while(!infile3.eof())
			    {
				   Book b;
			   	   infile3 >> b;
			   	   BookNode* x = new BookNode(b);
			   	if(x->get_book().get_last()>="N" && x->get_book().get_last()<="Z")
			   	   list.push_back(x);
			    }
			}


	    infile4.open(CHILDREN_FILE_NAME);
	    	if(infile4.fail())
	    	{
	    		cout << "!!!failed to open the file" << endl;
	    	}
	    	else
	    	{
	    		while(!infile4.eof())
	    	    {
	    		   Book b;
	    	   	   infile4 >> b;
	    	   	   BookNode* x = new BookNode(b);
	    	   	if(x->get_book().get_last()>="N" && x->get_book().get_last()<="Z")
	    	   	   list.push_back(x);
	    	    }
	    	}
	    	 for(int i=0; i<list.size();i++)
	    		        {
	    		        	  Book j = list[i]->get_book();
	    		        	  cout << j << endl;

	    		        }

}

//void BookList::sort_last_A_M(BookNode* b)
//{
//	if(b->get_book().get_last()>='A' && b->get_book().get_last()<='M')
//	{
//		sort_insert(b);
//	}
//}
//
//void BookList::sort_last_N_Z(BookNode* b)
//{
//	if(b->get_book().get_last()>='N' && b->get_book().get_last()<='Z')
//	{
//		sort_insert(b);
//	}
//}

void BookList::print()
{
    /***** Complete this function. *****/
	BookNode* temp = head;
	int count=0;

	while(temp != nullptr)
	{
		Book b = temp->get_book();
		cout<<"  " << b << endl;
        count++;
		temp = temp->getNext();
	}
	cout << "    ("<< count << " books)\n\n";

}

/***** Complete this file. *****/
