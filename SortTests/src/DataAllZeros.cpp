/*
 * DataAllZeros.cpp
 *
 *  Created on: Nov 14, 2017
 *      Author: chhavi
 */

#include "DataAllZeros.h"
#include "DataGenerator.h"
#include "Element.h"
/**
 * Default constructor.
 */
DataAllZeros::DataAllZeros() : DataGenerator("All zeroes") {}

/**
 * Destructor.
 */
DataAllZeros::~DataAllZeros() {}

/**
 * Generate all zeros to fill a data vector.
 * @param data the data vector to fill.
 */
void DataAllZeros::generate_data(vector<Element>& data, int size)
{
    for (int i = 0; i < size; i++) data.push_back(Element(0));
}
