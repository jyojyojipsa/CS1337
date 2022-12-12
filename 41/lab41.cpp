// Kangmin Kim
// CS 1337
// Lab 41
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

const string ID = "Kangmin Kim - CS 1337 - Lab 41 \n\n";

int main()
{
	char ch;
	
	cout << ID;
	
	while (cin.get(ch))
	{
		if (isupper(ch))
		{
		cout << static_cast<char>(tolower(ch));
		}
		else if ( isdigit(ch) || ispunct(ch))
		{
			//do nothing 
		}
		else
		{
			cout << ch;
		}
	}
	return 0;
}
