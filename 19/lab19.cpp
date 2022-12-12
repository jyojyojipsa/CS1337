//Kangmin Kim
//CS 1337
//Lab 19

#include <iostream>
#include <cstdlib>

using namespace std;

// Function isOdd returns true if num is odd and false otherwise
bool isOdd(int num)
{
	{
		if (((num&1)<<7)>>7==1)	// I used AND operator and shifted left then right
		// to see if it's odd
		return true; // when num is odd, return true
	}
		return false; // when it's even, return false
}
