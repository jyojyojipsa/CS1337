//Kangmin Kim
//CS 1337
//Lab 22

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

// sizeOfShort determines the number of bits in the internal
// representation of a short
unsigned int sizeOfShort(void)
{
	short i=-1;
	int j=0;
	
	while (i !=0)
	{
		i=i<< 1;
		j++;
	}
	return j;
}
// sizeOfInt determines the number of bits in the internal
// representation of an int
unsigned int sizeOfInt(void)
{
	int i=-1;
	int j=0;
	
	while (i !=0)
	{
		i=i<< 1;
		j++;
	}
	return j;
}
// sizeOfLong determines the number of bits in the internal
// representation of a long
unsigned int sizeOfLong(void)
{
	long i=-1;
	int j=0;
	
	while (i !=0)
	{
		i=i<< 1;
		j++;
	}
	return j;
}


// sizeOfLongLong determines the number of bits in the internal
// representation of a long long
unsigned int sizeOfLongLong(void)
{
	long long i=-1;
	int j=0;
	
	while (i !=0)
	{
		i=i<< 1;
		j++;
	}
	return j;
}

