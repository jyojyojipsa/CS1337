// Kangmin Kim
// CS 1337
// Lab 16

void mySwap(unsigned int &a,unsigned int &b);

// Function encrypt receives a four-digit integer abcd and returns a
// new integer as follows: Replace each digit of abcd by ((digit + 7) mod
// 10). Then looking at the number from the left, swap the first digit
// with the third, swap the second digit with the fourth, and return the
// new number.

unsigned int encrypt(unsigned int abcd)
{
	unsigned int a,b,c,d;
	
	a = abcd / 1000;
	
	a = (a+7) % 10;
	
	
	b = (abcd / 100)%10;
	
	b = (b+7) % 10;
	
	c = (abcd / 10)%10;
	
	c = (c+7) % 10;
	
	
	d = abcd % 10;
	
	d= (d+7) % 10;

	mySwap(a, c);
	
	mySwap(b, d);
	
	abcd = a * 1000 + b * 100 + c * 10 + d * 1;
	
	return abcd;
}

void mySwap(unsigned int &a, unsigned int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
