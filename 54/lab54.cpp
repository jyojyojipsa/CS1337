// Kangmin Kim
// CS 1337
// Lab 54


#include <lab54.h>


void rightToLeftSort(string array[], int n)
{
	string *ptr;
	
	ptr = array;
	*ptr = stringReverse(*ptr);
	// step 1 : reverse each element of array
	/*
	for()
	{
	}
	*/
	
	// step 2 : call the exchange sort from lab53
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
	
	
	// step 3 : reverse each element of array
}