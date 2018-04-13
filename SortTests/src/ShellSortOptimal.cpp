/*
 * ShellSortOptimal.cpp
 *
 *  Created on: Nov 14, 2017
 *      Author: chhavi
 */

#include "ShellSortOptimal.h"

/**
 * Constructor.
 * @param name the name of this algorithm.
 */
ShellSortOptimal::ShellSortOptimal(string name) :VectorSorter(name) {}

/**
 * Destructor.
 */
ShellSortOptimal::~ShellSortOptimal() {}

/**
 * Run the optimal shellsort algorithm.
 * According to Don Knuth:
 * h = 3*i + 1 for i = 0, 1, 2, ... used in reverse.
 * @throws an exception if an error occurred.
 */
void ShellSortOptimal::run_sort_algorithm() throw (string)
{
	//getting values of h
	int temp=0,p=0;
	for( p=0;p<size;p++)
	{
		if((3*p+1) > size)
		{
			temp=p;
			break;
		}
	}
//sorting
	    for(int x=temp;x>=0;x--)
	    {
	        int 	h = 3*temp+1;
	        for(int i=0; i<(size-h) ;i++)
	        {
	        	    compare_count++;
	            if(data[i]>data[i+h])
	            {
	                swap(i,i+h);
	            }
	        }
	    }
}


