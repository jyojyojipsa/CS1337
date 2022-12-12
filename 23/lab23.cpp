//Kangmin Kim
//CS 1337
//Lab 23

#include <bits.h>
#include <climits>

using namespace std;

// Returns the number of bits that are on (i.e., equal to 1) in word
unsigned int bitsOn(int word) // word is the cin, ex) 1001 1010 0101 1101 ... 1101 (int -> 32 bits)

{
	unsigned int count=0; // reset count
	
	unsigned int numBits=sizeof(word)*CHAR_BIT; //define the number of bits
	
	for (unsigned int loopC=0; loopC<numBits;loopC++) // loopC is place of the bit 
													  // where I am checking at
	{
		if (getBit(word, loopC)==1)
		//if(some condition) //check the bit value at location loopC and make sure it is on
		
		{
			count+=1; //update my count
		}
	}
	return count;
}
