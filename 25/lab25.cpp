//Kangmin Kim
//CS 1337
//Lab 25
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <bitset>
#include <bits.h>

//age-=3;
//number=setBits(number,12,4,age);
//number=setBits(number,8,4,grade);

// compress:  compresses age, grade, sex, and GPA into the lower 16
// bits of an unsigned int
using namespace std;

unsigned int compress(unsigned int age, unsigned int grade, char sex, double GPA)
{
	unsigned int number;
	number = 0;
	age-=3;
	number = setBits(number,12,4,age);
	number = setBits(number,8,4,grade); 
	if (sex == 'M')
	{
		number = setBits(number,7,1,1);
	}
	else if (sex == 'F')
	{
		number = setBits(number,7,1,0);
	}
	number = setBits(number,4,3,GPA);
	number = setBits(number,0,4,static_cast<int>(GPA*10)%10);
	
	return number;
}
