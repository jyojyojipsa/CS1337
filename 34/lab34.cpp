// Kangmin Kim
// CS 1337
// Lab 34

// Function orderThree has three reference parameters:  small, medium,
// and large.  The function returns the smallest of small, medium, and
// large in small; the middle value in medium; and the largest value
// in large.
void mySwap(int *x, int *y);

void orderThree(int& small, int& medium, int& large)
{
	if (small > medium)
	{
		//mySwap(&small, &medium);
		//mySwap(*small, *medium);
		mySwap(&small, &medium);
		if(small > large)
		{
			mySwap(&small, &large);
		}
		if(medium > large)
		{
			mySwap(&medium, &large);
		}
		
	}
	else if (small > large)
	{
		mySwap(&small, &large);
		mySwap(&medium, &large);
	}
	else if ( medium > large)
	{
		mySwap(&medium, &large);
	}
}
// Function orderThree has three parameters, each a pointer to an int
// value.  The function reorders the data so that the smallest of the
// values is pointed to by small, the middle value by medium, and the
// largest value by large.
void orderThree(int *small, int *medium, int *large)
{
	if (*small > *medium)
	{
		mySwap(small, medium);
		//mySwap(*small, *medium);
		//mySwap(&small, &medium);
		if(*small > *large)
		{
			mySwap(small, large);
		}
		if(*medium > *large)
		{
			mySwap(medium, large);
		}
		
	}
	else if (*small > *large)
	{
		mySwap(small, large);
		mySwap(medium, large);
	}
	else if ( *medium > *large)
	{
		mySwap(medium, large);
	}
	
}


void mySwap(int *x, int *y)
{		int temp;
		temp = *x;
		*x = *y;
		*y = temp;
}
