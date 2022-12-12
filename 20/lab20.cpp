// Kangmin Kim
// CS 1337
// Lab 20

#include <iostream>
#include <cstdlib>
#include <limits.h>

bool isNegative(int num)
{
	num = num >> ((sizeof(num)*CHAR_BIT)-1);
	
	if (num & 1)
	{
		return true;
	}
		return false;
}
