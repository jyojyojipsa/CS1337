// Kangmin Kim
// CS 1337
// Lab 63

#include <lab63.h>
#include <iomanip>

using namespace std;

//Constructor - Uses hr to initialize hour, min minute, and sec second
Time::Time(int hr, int min, int sec)
{
	setTime(hr, min, sec);
}

//Your three accessor founctions will go here

//isAM()

void Time::setTime(int hr, int min, int sec)
{
	if(hr>=0&&hr<=23)
	{
		hour = hr;
	}
	else{
		hour = 0;
	}
	
	//so your two more checks for min and sec
}

void Time::printStandard(ostream& os) const
{
	char ch=os.fill();
	os << setfill(' ') << setw(2);
	if(hour==0)
		os << 12;
	else if (hour >=1 && hour <=12)
		os << hour;
	else
		os << hour-12;
	
	os << ':' << setfill('0') << setw(2) << minute;
	os << ':' << setw(2) << second; 
	os << ' ';
	if(.....)
		os << ......;
	else
		os << ......;
	
	os << setfill(ch);
	
}

int Time::timeToSeconds() const
{
	
}