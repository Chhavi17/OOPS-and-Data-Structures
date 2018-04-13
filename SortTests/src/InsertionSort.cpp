/*
 * InsertionSort.cpp
 *
 *  Created on: Nov 14, 2017
 *      Author: chhavi
 */

#include "InsertionSort.h"

/**
 * Constructor.
 * @param name the name of the algorithm.
 */
InsertionSort::InsertionSort(string name) : VectorSorter(name) {}

/**
 * Destructor.
 */
InsertionSort::~InsertionSort() {}

/**
 * Run the insertion sort algorithm.
 * @throws an exception if an error occurred.
 */
void InsertionSort::run_sort_algorithm() throw (string)
{
	  for(int i=1; i<size; i++)
	    {
	       int j=i-1,u=i;

	            while(data[u]<data[j] && j>=0)
	            {
	              compare_count++;
                   swap(u,j);
	               j--,u--;
	            }

	    }
}
