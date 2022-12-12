// Kangmin Kim
// CS 1337
// Lab 07
#include <iostream>

using namespace std;

int main()
{
	cout << "Kangmin Kim - CS 1337 - Lab 07\n" << endl;

	for (int loopC = 100; loopC <= 999; loopC++) // abc
	{
		int a = loopC / 100; // get 1st number
		int b = loopC / 10 % 10; // abc -> ab -> b (abc % 100 -> bc)
		int c = loopC % 10;
		
		if ( a + b + c == a * b * c)
			cout << loopC << endl;
	}
	
	return 0;
}	