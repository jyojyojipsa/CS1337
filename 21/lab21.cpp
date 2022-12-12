//Kangmin Kim
//CS 1337
//Lab 21

#include<fstream>
#include<climits>

using namespace std;

const int N = CHAR_BIT*sizeof(int);

void printBinary(int n, ostream& os)

{
	
	int i,j;
	
	for (int i=31; i>=0; i--)
	{
		j = n >> i;
		
		if (j & 01)
			os << "1";
		else
			os << "0";
	}
		
}
