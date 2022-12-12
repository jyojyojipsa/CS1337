// Kangmin Kim
// CS 1337
// Lab 48

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string replaceDigits(string s)
{
	
	unsigned int i = 0;
	for(i = 0; i < s.length(); i++)
	{
		if(isdigit(s[i]))
			s[i] = '#';
	}
	return s;	
}
