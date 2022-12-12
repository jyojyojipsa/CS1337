//Kangmin Kim
//CS 1337
//Lab 60

#include <iostream>
#include <cstdlib>
#include <string>
#include <lab59.h>
#include <iomanip>

using namespace std;

void swap(Rational &r1, Rational &r2)
{
	Rational temp=r1;
		r1=r2;
		r2=temp;
}


// Function sort - sorts the n-element array of Rationals in
// ascending order
void sort(Rational array[], int n)
{
	Rational *outer, *inner;
	for(outer=array;outer<array+(n-1);outer++)
	{
		for(inner=outer+1;inner<array+n;inner++)
		{
			if(rationalGreaterThan(*outer, *inner))// you need to determine if the value at outer is grater than the value at inner
				swap(*outer,*inner);
		}
	}
}

// Function writeArray - Writes the n-element array of Rationals to
// output stream out, each element on a separate line
ostream& writeArray(ostream& out, const Rational array[], int n)
{
  const Rational *i;
	out << "array\n{\n";
	for(i=array;i<array+n;i++)
	{
		//out << "  [" << setw(2) << i - array << "] = " << *i << endl;
		//rational output 
		out << "  [" << setw(2) << i - array << "] = " ;
		rationalOutput(out, *i);
		
		// you to figure out the call to a function you wrote in lab57
		
		
		out << endl;
	}
	out << "}\n";
	return out;
}

