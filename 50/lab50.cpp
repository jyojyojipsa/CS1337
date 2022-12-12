// Kangmin Kim
// CS 1337
// Lab 50

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

const string ID = "Kangmin Kim - CS 1337 - Lab 50 \n\n";

bool isVowel(char ch);
bool isConsonant(char ch);
bool isNotAlphabetical(char ch);
int main()
{
	string word;
	int wordCt = 0;
	int vowelWordCt = 0;
	int consonantWordCt = 0;
	int alphabeticalWordCt = 0;
	// output ID line
	cout << ID;
	
	// read from standard input word-by-word
	while (cin >> word)
	{
		wordCt++;
				
		if (isVowel(word[0]))
		{
			vowelWordCt++;
		}
		else if (isConsonant(word[0]))
		{
			consonantWordCt++;
		}
		else if (isNotAlphabetical(word[0]))
		{
			alphabeticalWordCt++;
		}
	}
	
	cout << "Total Number of Words = " << wordCt << endl;
	cout << "Number of Words Beginning with a Vowel = " << vowelWordCt << endl;
	cout << "Number of Words Beginning with a Consonant = " << consonantWordCt <<  endl;
	cout << "Number of Words Beginning with a Non-Alpha = " << alphabeticalWordCt <<  endl;
	return 0;
}

bool isVowel(char ch)
{
	string vowels = "aeiou";
	
	ch = tolower(ch);
	
	if (vowels.find_first_of(ch) == string::npos) //Searches the string for the first character that matches any of the characters specified in its arguments.
		return false;							// retrun npos when the result doesn't match
	else
		return true;
}

bool isConsonant(char ch)
{
	string consonant = "bcdfghjklmnpqrstvwxyz";
	
	ch = tolower(ch);
	
	if (consonant.find_first_of(ch) == string::npos) 
		return false;							
		return true;
}
bool isNotAlphabetical(char ch)
{
	bool isCharAVowel = isVowel(ch);
	bool isCharAConsonant = isConsonant(ch);
	return !(isCharAVowel || isCharAConsonant);
}


//bool isNotAlphabetical(char ch)
//{
//	string alphabetical = "abcdefghijklmnopqrstuvwxyz";
//	
//	ch = tolower(ch);
//	
//	if (alphabetical.find_first_of(ch)== string::npos) //Searches the string for the first character that matches any of the characters specified in its arguments.
//		return true;						
//	else
//		return false;
//}
//