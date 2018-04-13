#include <string>
#include "Word.h"
using namespace std;

/***** Modify this file as needed. *****/

Word::Word() : text(""), count(0) {}
Word::Word(string text) : text(text), count(1) {}

void Word::increase_count()
{
	count++;
}

//bool Word::operator()(Word w1)
//{
//   return text == w1.text;
//}

string Word::get_text()
{
	return text;
}

Word::~Word() {}
