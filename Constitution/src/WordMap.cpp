#include <iostream>
#include <map>
#include "WordMap.h"

/***** Complete this file. *****/

using namespace std;

WordMap::WordMap()
{
    /***** Complete this member function. *****/
}

WordMap::~WordMap()
{
    /***** Complete this member function. *****/
}

long WordMap::get_size()
{
	return data.size();
}

Word *WordMap::insert(const string text)
{
    /***** Complete this member function. *****/
	Word w(text);
//    map<string,Word>::iterator it ;
//    it = find(data.begin(),data.end(),text);
//    if(it == data.end())
//    {
  	     data.insert(data.begin(),pair<string,Word>(text,w));
//    }
//	  else
//		  (*it).second.increase_count();
  	     return &w;
}

Word *WordMap::search(const string text)
{
	Word w(text);
    /***** Complete this member function. *****/
	return &w;
}
