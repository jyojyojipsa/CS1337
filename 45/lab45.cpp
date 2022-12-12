// Kangmin Kim
// CS 1337
// Lab 45

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

const string ID = "Kangmin Kim - CS 1337 - Lab 45\n\n";

int main()
{
	cout << ID;
	char ch;
	bool lineJustFinished = true;
	int lineCount = 0;
	while(cin.get(ch))
	{
		if(lineJustFinished)
		{
			lineCount++;
		}
		if(ch == '\n')
		{
			lineJustFinished = true;
		}else
		{
			lineJustFinished = false;
		}
	}
	cout << "Number of lines = " << lineCount << endl;
	return 0;
}
