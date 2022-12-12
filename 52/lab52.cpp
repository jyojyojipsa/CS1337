// Kangmin Kim
// CS 1337
// Lab 52

#include <string>
#include <cctype>

using namespace std;

string removeWhitespace(string s)
{
	string::iterator itr;
	
	for (itr = s.begin(); itr < s.end();)
	{
		if (isspace(*itr))
			s.erase(itr);
		else
			itr++;
	}
	
	return s;
}
