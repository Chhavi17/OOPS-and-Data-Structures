/*
 * QuickSorter.cpp
 *
 *  Created on: Nov 14, 2017
 *      Author: chhavi
 */

#include <iostream>
#include "QuickSorter.h"
using namespace std;

/**
 * Constructor.
 * @param name the name of this algorithm.
 */
QuickSorter::QuickSorter(string name) : VectorSorter(name) {}

/**
 * Destructor.
 */
QuickSorter::~QuickSorter() {}

/**
 * Run the quicksort algorithm.
 * @throws an exception if an error occurred.
 */
void QuickSorter::run_sort_algorithm() throw (string)
{
    quicksort(0, size-1);
}

/**
 * The quicksort algorithm recursively sorts data subranges.
 * @param left the left index of the subrange to sort.
 * @param right the right index of the subrange to sort.
 */
void QuickSorter::quicksort(const int left, const int right)
{

///////This algorithm seems to be working perfectly fine on the online debuggers but is going
////	/// into an infinite loop in this program.

//base condition
    if(left >= right)
    	 return;
//    else
//    {
//    	   Element pivot;
//
//        pivot = choose_pivot(left,right);
//        int index = partition(left,right,pivot);
//        quicksort(left,index);
//        quicksort(index+1,right);
//    }
}

/**
 * Choose the pivot according to a pivot strategy.
 * The chosen pivot will be moved temporarily to the right end.
 * @param left the left index of the partition to sort.
 * @param right the right index of the partition to sort.
 * @return the pivot value.
 */
Element& QuickSorter::choose_pivot(const int left, const int right)
{
    return choose_pivot_strategy(left, right);
}

/**
 * Partition the subrange by moving data elements < pivot to the left
 * and data elements > pivot to the right.
 * @param left the left index of the partition to sort.
 * @param right the right index of the partition to sort.
 * @param pivot the pivot value.
 */
int QuickSorter::partition(const int left, const int right, const Element& pivot)
{
	int k=0;
	int s= right - left +1;
	//positioning the pivot at the righmost end
	for(k=0;k<s;k++)
	{
		if(data[k] == pivot)
			break;
	}
	swap(k,right);
	//comparing from left and right ends
	int i=left,j=right-1;
    while(i<j)
    {

    	    while((data[i] < pivot ) && i<j){
    	    	    i++;
            compare_count++;
          }
    	    while((data[j]>pivot) && i<j){
    	    	    j--;
	        compare_count++;
          }
    	    if(i<j)
    	    swap(i,j);
    	    else
    	    	  break;
    }
    //putting the pivot at the right place
    if(data[i]>pivot)
    swap(i,right);
    //returning position of pivot
    return i;
}
