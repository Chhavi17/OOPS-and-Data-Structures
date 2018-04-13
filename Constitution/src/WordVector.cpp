#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "WordVector.h"

/***** Complete this file. *****/

using namespace std;

WordVector::WordVector()
{
    /***** Complete this member function. *****/
}


WordVector::~WordVector()
{
    /***** Complete this member function. *****/
}


long WordVector::get_size()
{
	return data.size();
}

//bool compWords(Word& w1, Word& w2)
//{
//	return w1.get_text() < w2.get_text();
//}

//bool operator equal(string s)
//{
//	return w1.get_text() == w2.get_text();
//}

Word *WordVector::insert(const string text)
{
    /***** Complete this member function. *****/
      Word w(text);

//      vector<Word>::iterator it ;
//      it = find_if(data.begin(),data.end(), w);
//      if(it == data.end())
//      {
    	     data.push_back(w);
    	    // sort(data.begin(),data.end(),compWords);
//      }
//	  else
//		  (*it).increase_count();
    	     return &w;
}

Word *WordVector::search(const string text)
{
    /***** Complete this member function. *****/
	Word w(text);
	return &w;

}
