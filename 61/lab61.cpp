// Kangmin Kim
// CS 1337
// Lab 61

#include <lab61.h>

using namespace std;

RealNumber::RealNumber(double x) // scope operator
{
	realValue =x;
}

int RealNumber::round() const
{
	//5.75 -> 6
	//5.75+.5=6.25 static cast 6
	//5.25 -> 5
	//5.25+.5=5.75 static cast 5
	
	//-5.75 -> -6
	//-5.75-.5=-6.25 static cast -6
	//-5.25 -> -5
	//-5.25-.5=-5.75 static cast -5
	if(realValue>=0)
	{
		return static_cast<int>(realValue+.5);
	}
	
	return static_cast<int>(realValue-.5);
}

int RealNumber::wholePart() const
{
	return static_cast<int>(realValue);
}

double RealNumber::fracPart() const
{
	return realValue-wholePart();
}

double RealNumber::getReal() const
{
	return realValue;
}

void RealNumber::setReal(double x)
{
	realValue=x;
}
