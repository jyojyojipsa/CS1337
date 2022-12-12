// Kangmin Kim
// CS 1337
// Lab 27

#include <bits.h>
#include <climits>

unsigned int invBit(unsigned int word, int n)
{
	if(getBit(word, n)==0)
	{
		word = setBit(word,n,1);
	}
	else
	{
		word = setBit(word,n,0);
	}
	return word;
}
