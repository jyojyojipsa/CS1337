// Kangmin Kim
// CS 1337
// Lab 46

#include <iostream>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

const string ID = "Kangmin Kim - CS 1337 - Lab 46\n\n";

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
			cout << setfill(' ') << setw(4) << lineCount << ":  ";
		}
		if(ch == '\n')
		{
			lineJustFinished = true;
		}
		else
		{
			lineJustFinished = false;
		}
		cout << ch;
	}
	return 0;
}
