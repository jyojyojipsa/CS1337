//Kangmin Kim
//CS 1337
//Lab 18
#include <fstream>

using namespace std;

unsigned int reverseInt(unsigned int num)
{
	unsigned int reverse=0;
	
	while(num!=0)
	{
		unsigned digit = num%10;
		reverse=reverse*10+digit;
		num/=10;
	}
	return reverse;
}

unsigned int generateSequence(unsigned int num, ostream& out)
{
	out << num;
	unsigned int k = 0;
	while(num!=1)
	{
		//num=num+4;
		//num=reverseInt(num);
		num=reverseInt(num+4);
		out << ", "<< num;
		k++;
	}
	out << endl;
	return k;
}
