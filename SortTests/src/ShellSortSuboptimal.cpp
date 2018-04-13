/*
 * ShellSortSuboptimal.cpp
 *
 *  Created on: Nov 14, 2017
 *      Author: chhavi
 */

#include "ShellSortSuboptimal.h"

/**
 * Constructor.
 * @param name the name of this algorithm.
 */
ShellSortSuboptimal::ShellSortSuboptimal(string name) : VectorSorter(name) {}

/**
 * Destructor.
 */
ShellSortSuboptimal::~ShellSortSuboptimal() {}

/**
 * Run the suboptimal shellsort algorithm.
 * @throws an exception if an error occurred.
 */
void ShellSortSuboptimal::run_sort_algorithm() throw (string)
{
	int h = size/2;
    while(h!=0)
    {
        for(int i=0; i<(size-h) ;i++)
        {
        	    compare_count++;
            if(data[i]>data[i+h])
            {
                swap(i,i+h);
            }
        }
        h=h/2;
    }

}
