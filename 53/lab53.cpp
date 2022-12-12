// Kangmin Kim
// CS 1337
// Lab 53

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

// Function sort - sorts the n-element array of strings in
// ascending order using an exchange sort
void sort(string array[], int n)
{
	
	string *outer, *inner;
	
	for (outer = array; outer < ???; outer++)
	{
		for (inner = ???; inner < ???; inner++)
		{
			if(???)
			{
				(*outer).swap(*inner);
			} 
		}//end inner loop
	}//end outer loop
}
	


// Function writeArray - Writes the n-element array of strings to
// output stream out, each element on a separate line
ostream& writeArray(ostream& out, const string array[], int n)
{
	{
  const string *ptr;
  const string *const endPtr = array + n;

  if (n > 0)
		{
    out << "array" << endl << '{' << endl;
    for (ptr = array; ptr < endPtr; ++ptr)
      out << "  [" << setw(2) << ptr - array << "] = " << *ptr << endl;
    out << '}' << endl;
		}
	}
	return out;
}