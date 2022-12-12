// Kangmin Kim
// CS 1337
// lab 47

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Function uppercase converts each lowercase character of s to its
// uppercase equivalent; all other characters are left unchanged. The
// transformed string is returned to the calling function.
string uppercase(string s)
{
	
	string::iterator itr;
	for(itr = s.begin(); itr < s.end(); itr++)
	{
		*itr = toupper(*itr);
	}
	return s;
}
