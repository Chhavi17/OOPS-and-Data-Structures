/*
 * MergeSort.cpp
 *
 *  Created on: Nov 14, 2017
 *      Author: chhavi
 */

#include <string>
#include "MergeSort.h"

/**
 * Constructor.
 * @param name the name of the algorithm.
 */
MergeSort::MergeSort(string name) : ListSorter(name) {}

/**
 * Destructor.
 */
MergeSort::~MergeSort() {}

/**
 * Run the mergesort algorithm.
 * @throws an exception if an error occurred.
 */
void MergeSort::run_sort_algorithm()
    throw (string)
{
    // Defensive programming: Make sure we end up
    // with the same size list after sorting.
    int size_before = data.get_size();

    mergesort(data);

    // Check sizes.
    int size_after = data.get_size();
    if (size_before != size_after)
    {
        string message = "***** Size mismatch: before " +
                         to_string(size_before) + ", size after " +
                         to_string(size_after);
        throw message;
    }
}

/**
 * The mergesort algorithm recursively splits and merges data lists.
 * @param list the list of data to sort.
 */
void MergeSort::mergesort(LinkedList& list)
{
	//base condition
    if(list.get_size() <= 1)
    {
    	  return;
    }
//    else
//    {
//    	   LinkedList l1,l2;
//    	   list.split(l1,l2);
//    	   mergesort(l1);
//    	   mergesort(l2);
//    	   merge(list,l1,l2);
//    }
}

/**
 * Merge two sublists back into a single list.
 * @param list the merged list.
 * @param sublist1 the first sublist.
 * @param sublist2 the second sublist.
 */
void MergeSort::merge(LinkedList& list,
                      LinkedList& sublist1, LinkedList& sublist2)
{
    sublist1.concatenate(sublist2);
    list = sublist1;
}

/**
 * Clear the data.
 */
void MergeSort::clear() { data.clear(); }
