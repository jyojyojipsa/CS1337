// Kangmin Kim
// CS 1337
// Lab 39



// modeUsingIndexing:  Using indexing, this function returns the mode
// of the n-element integer array.  The mode is defined as the value
// which occurs most frequently in a set of data.  The count of the
// number of times the mode occurs in the array is returned via the
// third parameter.
int modeUsingIndexing(const int array[], int n, int& count)
{
	int i, j, myCount, myMode;
	
	count = 0;
	
	for (i = 0; i < n; i++)
	{
		myCount = 1;
		for (j = i + 1; j < n; j++)
		{
			if (array[i] == array[j])
			{
				myCount++;
			}
		}
		
		if (myCount > count)
		{
			count = myCount;
			myMode = array[i];
		}
	}
	
	return myMode;
}

// modeUsingPointers:  Using pointers, this function returns the mode
// of the n-element integer array.  The mode is defined as the value
// which occurs most frequently in a set of data.  The count of the
// number of times the mode occurs in the array is returned via the
// third parameter.
int modeUsingPointers(const int *array, int n, int& count)
{
	int myCount, myMode;
	
	const int *i, *j;
	
	count = 0;
	
	for ( i = &array[0]; i < &array[n]; i++)// it start from array [0]
	{
		myCount = 1;
		for (j = i+ 1; j <&array[n] ; j++)
		{
			if (*i == *j)
			{
				myCount++;
			}
		}
		
		if (myCount > count)
		{
			count = myCount;//
			myMode = *i;
		}
	}
	
	return myMode;
}