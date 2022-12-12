//Kangmin Kim
//CS 1337
//Lab 24

#include <climits>
#include <fstream>
#include <bits.h>

// printQuaternary:  Writes the quaternary representation of word to
// output stream os.
void printQuaternary(int word, ostream& os)
{
	int startPosition=(((sizeof(word)*CHAR_BIT)-1)/2)*2; // starts at ((32-1)/2)*2 = 30
	for (int loopC=startPosition;loopC>=0;loopC-=2) // decrease each 2 to lower the start point
	{
		os << getBits(word, loopC,2); // get bits from loopC grouping 2
									  // ex) if word is 1100 0011 1111 1100
									  // when startPosition is 1
									  // ( word, 1, 2)
									  // 1 10 00 01 11 11 11 10(0=delete)
									  // it's 7 bits!
									  // starting point is 14th number of it
									  
	}
}

// printOctal:  Writes the octal representation of word to output
// stream os.
void printOctal(int word, ostream& os)
{
	int startPosition=(((sizeof(word)*CHAR_BIT)-1)/3)*3;
	for (int loopC=startPosition;loopC>=0;loopC-=3)
	{
		os << getBits(word, loopC,3);
	}
}
