/*
 * DataRandom.h
 *
 *  Created on: Nov 14, 2017
 *      Author: chhavi
 */

#ifndef DATARANDOM_H_
#define DATARANDOM_H_

#include "DataGenerator.h"
#include "Element.h"

/**
 * Generator for unsorted random data.
 */
class DataRandom: public DataGenerator
{
public:
    DataRandom();
    virtual ~DataRandom();

    virtual void generate_data(vector<Element>& data, int size);

private:
    vector<Element> random_data;
};

#endif /* DATARANDOM_H_ */
