// Kangmin Kim
// CS 1337
// Lab 12
#include <iostream>

using namespace std;

int main()
{
	cout << "Kangmin Kim - CS 1337 - Lab 12\n" << endl;

	for (int loopC = 10000; loopC <= 99999; loopC++) // abcde
	{
		int a = loopC / 10000; // get 1st number
		int b = (loopC / 1000)%10; // abc -> ab -> b (abc % 100 -> bc) take out a
		int c = (loopC / 100) % 10; // ab // cde // take out c
		int d = (loopC / 10) % 10 ; // abc // de  // take out d
		int e = loopC % 10; // abcd // take out e 
		
		if ( 10*a+b == d*e && b == 4*e && e == d-7 && c ==a+b )
			
			cout << loopC << endl;
	}
	
	return 0;
}	
