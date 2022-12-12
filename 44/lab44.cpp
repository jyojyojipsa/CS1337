// Kangmin Kim
// CS 1337
// Lab 44

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

const string ID = "Kangmin Kim - CS 1337 - Lab 44\n\n";

int main()
{

	char ch;
	int wordCount = 0;
	bool inAWord = false;
	while(cin.get(ch))
	{
		if(isspace(ch))
		{
			inAWord = false;
		}
		else
		{
			if(!inAWord)
			{
				wordCount++;				
			}
			inAWord = true;
		}
	}
	
	
	cout << ID << "Number of words = " << wordCount << endl;
	return 0;
}
