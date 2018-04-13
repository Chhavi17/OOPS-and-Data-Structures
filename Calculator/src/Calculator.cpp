/*
 * Calculator.cpp
 *
 *  Created on: Nov 1, 2017
 *      Author: chhavi
 */

#include "Calculator.h"
#include "math.h"

Calculator::Calculator() {
	exp = "";
}

Calculator::~Calculator() {
	// TODO Auto-generated destructor stub
}

double Calculator::expression(string s)
{
	int i=0;
	double sum=0.0;
	if(s.length() == 0)
		return 0;

	else
	{
		while((s[i] > 47 && s[i] < 58) || s[i] == '.' || s[i] =='e' || s[i] == 'E')
		{
			if(s[i] =='e' || s[i] == 'E')
				i++;
			i++;
		}
		if(s[i] == '\0')
		{
			sum = stod(s);
		}
		else if(s[i] == '+')
		{
			double op1 = stod(s.substr(0,i));
			sum = op1 + term(s.substr(i+1));
		}
		else if(s[i] == '-')
		{
			if(i==0) sum = (-1) * term(s.substr(1));
			else
			{
				double op1 = stod(s.substr(0,i));
						sum = op1 - term(s.substr(i+1));
			}

		}
		else
		{
			sum = term(s);
		}

	}

	return sum;
}

double Calculator::term(string s)
{
	int i=0;
	double sum=0.0;
		if(s.length() == 0)
			return 0;

		else
		{
			while((s[i] > 47 && s[i] < 58) || s[i] == '.' || s[i] =='e' || s[i] == 'E')
			{
				if(s[i] =='e' || s[i] == 'E')
								i++;
				i++;
			}
			if(s[i] == '\0')
			{
				sum = stod(s);
			}
			else if(s[i] == '*')
			{
				double op1 = stod(s.substr(0,i));
				sum = op1 * factor(s.substr(i+1));
			}
			else if(s[i] == '/')
			{
				double op1 = stod(s.substr(0,i));
				sum = op1 / factor(s.substr(i+1));
			}
			else
			{
				sum = factor(s);
			}
		}

  return sum;

}


double Calculator::factor(string s)
{
	int i=0;
	double sum=0.0;
	if(s.length() == 0)
		return 0;

	else
	{
//		while((s[i] > 47 && s[i] < 58) || s[i] == '.' )
//		{
//			i++;
//		}
//		if(s[i] == '\0')
//		{
//			sum = stod(s);
//		}
		if(s[i] == '(')
		{
			int j=0;
			while(s[j]!=')')
			{
				j++;
			}
			//double op1 = stod(s.substr(0,i));
			sum = expression(s.substr(i+1,j-1));

		}
		else if(s[i]=='^')
		{

			double op1 = stod(s.substr(0,i));
			sum = pow (op1 , expression(s.substr(i+1)));

		}
		else
		{
			sum = expression(s);
		}

	}

	  return sum;
}
