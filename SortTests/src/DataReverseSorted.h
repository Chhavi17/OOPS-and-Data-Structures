/*
 * DataReverseSorted.h
 *
 *  Created on: Nov 14, 2017
 *      Author: chhavi
 */

#ifndef DATAREVERSESORTED_H_
#define DATAREVERSESORTED_H_

#include "DataGenerator.h"
#include "Element.h"
#include "vector"

/**
 * Generator for reverse-sorted data.
 */
class DataReverseSorted: public DataGenerator
{
public:
    DataReverseSorted();
    virtual ~DataReverseSorted();

    void generate_data(vector<Element>& data, int size);
};

#endif /* DATAREVERSESORTED_H_ */
