//Kangmin Kim
//CS 1337
//Lab 14

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	cout << "Kangmin Kim - CS 1337 - Lab 14\n" << endl;
	int ssn;
	cout << "-----------------------" << endl;
	cout << "  Input      Formatted" << endl;
	cout << "-----------------------" << endl;

	
	while(cin >> ssn)
	{
		int area, group, serial; 
		area = ssn/1000000; 
		group = (ssn/10000)%100;
		serial = ssn%10000;
		//formatted line
		cout << setfill('0') << setw(9) << ssn << "   " << setfill(' '); // for input lines
		cout << setfill('0') << setw(3) << area << '-' << setw(2) << group << '-' << setw(4) << serial << setfill(' ') << endl; // for Formatted
	}
	cout << "-----------------------" << endl;
	
	return 0;
}
