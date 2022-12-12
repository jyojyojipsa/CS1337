// Kangmin Kim
// CS 1337
// Lab 51

#include <string>
#include <cctype>

using namespace std;

string removePunctuation(string s)
{
	string::iterator itr;
	
	for (itr = s.begin(); itr < s.end();)
	{
		if (ispunct(*itr))
			s.erase(itr);
		else
			itr++;
	}
	
	return s;
}
