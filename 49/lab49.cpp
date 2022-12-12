// Kangmin Kim
// CS 1337
// Lab 49

#include <string>

using namespace std;

void mySwap(char &x, char &y);

// Function stringReverse reverses the characters of string s; that is,
// the function exchanges the first and last characters, the second and
// next-to-last characters, and so on. The transformed string is 
// returned to the calling function.
string stringReverse(string s)
{
		uint left, right;
		
		for (left = 0, right = s.length() - 1; left < right; left++, right--)
		{ // s.laength() returns how many characters inside of the string
			mySwap(s[left], s[right]);
		}
		return s;
}

void mySwap(char &x, char &y)
{
	char temp;
	temp = x;
	x = y;
	y = temp;
}
