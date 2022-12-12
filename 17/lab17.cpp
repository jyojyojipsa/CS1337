//Kangmin Kim
//CS 1337
//Lab 17

void initializeDigits(bool digits[], int n, bool value)
{
	for(int loopC=0; loopC<n;loopC++)
	{
		digits[loopC]=value;
	}
}

void determineDigits(bool digits[], int n, int abcde) // digits[] -> digits[], n = 10
{
	//i need to make variables a-e, and assign
	//the correct digit to each variables
	int a,b,c,d,e;
	a = abcde / 10000;
	b = (abcde / 1000)%10;
	c = (abcde / 100)%10;
	d = (abcde / 10)%10;
	e =  abcde%10;
	
	digits[a]=true;
	digits[b]=true;
	digits[c]=true;
	digits[d]=true;
	digits[e]=true;
	// four more time
}

bool checkDigits(const bool digits[], int n)
{
	for(int loopC=0;loopC<n;loopC++)
	{
		if(digits[loopC]!=true)
			return false;
	}
	return true;
}
