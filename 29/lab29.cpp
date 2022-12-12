// Kangmin Kim
// CS 1337
// Lab 29

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <bitset>
#include <climits>
#include <bits.h>
using namespace std;

const int N = sizeof(int) * CHAR_BIT; // # of bits in an int

// decompress: decompresses the low-order 16 bits of info and
// returns age, grade, sex, and GPA
void decompress(unsigned int info, unsigned int& age, unsigned int& grade, char& sex, double& GPA)
{
	int whoIGPA;;
	double fracGPA;

	age = getBits(info, 12, 4) + 3;
	grade = getBits(info, 8, 4);
	if (getBit(info, 7) == 0x1)
	{
		sex = 'M';
	}
	else
	{
		sex = 'F';
	}	
	
	whoIGPA = getBits(info, 4, 3);
	fracGPA = getBits(info, 0, 4);
	GPA = whoIGPA + fracGPA / 10;
	
}
