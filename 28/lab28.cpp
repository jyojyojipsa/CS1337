// Kangmin Kim
// CS 1337
// Lab 28

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <bitset>
#include <climits>
#include <bits.h>

using namespace std;

// printHexadecimal:  Writes the hexadecimal representation of word to
// output stream os.

const int N = sizeof(int) * CHAR_BIT; // # of bits in an int

void printHexadecimal(int word, ostream& os)
{
	int FourbitsOfWhichBit;
	int whichBit;
	for(whichBit = ( N - 1 ) / 4 * 4 ; whichBit >= 0 ; whichBit -= 4)//direct from left to right when
																  //calculate
	{
		FourbitsOfWhichBit = getBits(word, whichBit, 4);//divide 4 and calculate
		if(FourbitsOfWhichBit  == 15)
		{
			os << 'F';
		}
		else if(FourbitsOfWhichBit == 14)
		{
			os << 'E';
		}
		else if(FourbitsOfWhichBit == 13)
		{
			os << 'D';
		}
		else if(FourbitsOfWhichBit == 12)
		{
			os << 'C';
		}
		else if(FourbitsOfWhichBit == 11)
		{
			os << 'B';
		}
		else if(FourbitsOfWhichBit == 10)
		{
			os << 'A';
		}
		else
		{
			os << FourbitsOfWhichBit;
		}
	}
}

