/*
 * Calculator.h
 *
 *  Created on: Nov 1, 2017
 *      Author: chhavi
 */

#ifndef CALCULATOR_H_
#define CALCULATOR_H_
#include <string>

using namespace std;

class Calculator {
public:
	//constructor
	Calculator();

	//destructor
	virtual ~Calculator();

	//evaluates expressions
	double expression(string);

	//evaluates factors
	double factor(string);

	//evaluates terms
	double term(string);
private:
	string exp;
};

#endif /* CALCULATOR_H_ */
