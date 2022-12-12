// Kangmin Kim
// CS 1337
// Lab 57

#include <lab57.h>
#include <iostream>
#include <cmath>

bool rationalValid(const Rational& rational)
{
	return rational.denominator!=0;
}


void rationalNormalize(Rational& rational)
{
	int myGCD=gcd(rational.numerator,rational.denominator);
	
	if(rational.denominator<0)
		myGCD=myGCD*-1;
	
	rational.numerator=rational.numerator/myGCD;
	rational.denominator=rational.denominator/myGCD;
}	

istream& rationalInput(istream& in, Rational& rational)
{
		in >> rational.numerator;
		in >> rational.denominator;
		return in;
}

ostream& rationalOutput(ostream& out, const Rational& rational)
{
	//Output the rational number as 'a / b'
	out << rational.numerator;
	out << '/';
	out << rational.denominator;
	return out;
}
	
int gcd(int u, int v)
{
	if(u==0&&v==0)
		return 0;
	
	if(v==0)
		return abs(u);
	
	if(u==0)
		return abs(v);
	
	u = abs(u);
	v = abs(v);
	//this is pseudocode
	int temp;
	if(u > v)
	{
		temp = v;
	}
	else
	{
		temp = u;
	}
	
	while(u%temp!=0 || v%temp!=0)
	{
		temp-=1;
	}
	return temp;
}
