//Kangmin Kim
//CS 1337
//Lab 15

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
