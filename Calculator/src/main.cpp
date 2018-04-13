//============================================================================
// Name        : Calculator.cpp
// Author      : Chhavi Mehta
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Calculator.h"
using namespace std;


int main() {
	string input_expression,input;
	while(1)
	{
		cout << "Expression? " ; // prints Expression?
		cin >> input;            //inputs expression from the user
		int count=0;
		int c1=0,c2=0;

		input_expression = input;

		for(int i=0;i<input_expression.length();i++){


				if(input_expression[i] == '(') c1++;
                 if(input_expression[i] == ')') c2++;

		}
		try{
			if(c1<c2) throw '(';
			if(c2<c1) throw ')';
		}
		catch(char s)
		{
			cout << "******Missing " << s;
			return 0;
		}

		if(input_expression == ".")
			break;
		else
		{
			Calculator c;
			double result = c.expression(input_expression);
			cout << " = " << result << endl;
		}

	}
	cout << endl << "Done!";
	return 0;

}
