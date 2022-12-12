// Kangmin Kim
// CS 1337
// Lab 42

#include <iostream>
#include <cctype>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

const string ID = "Kangmin Kim - CS 1337 - Lab 42\n\n";

int main()
{

	char ch;
	
	cout << ID;
	
	int whitespaceCount = 0;
	
	int punctuationCount = 0;
	
	int charCount['Z' + 1];
	
	int i;
	
	for(i = '0'; i <= 'Z'; i++)
	{
		charCount[i] = 0;
	}
	while(cin.get(ch))
	{
		if(isalpha(ch))
		{
			charCount[toupper(ch)]++;
		}
		else if(ispunct(ch))
		{
			punctuationCount++;
		}
		else if(isdigit(ch))
		{
			charCount[static_cast<int>(ch)]++;
		}
		else if(isspace(ch))
		{
			whitespaceCount++;
		}
	}
	
	if(whitespaceCount)
		cout << "whitespace = " << whitespaceCount << "\n";
	if(punctuationCount)
		cout << "punctuation = " << punctuationCount << "\n";
	
	cout << setfill('-') << setw(18) << "\n";
	
	cout << "Character" << "   Count\n";
	
	cout << setw(18) << "\n";
	
	for(i = '0'; i <= 'Z'; i++)
	{
		if(charCount[i])
			cout << setfill(' ') << setw(5) << static_cast<char>(i) << setw(12) << charCount[i] << "\n";
	}
	
	cout << setfill('-') << setw(18) << "\n";
	
	return 0;
}
