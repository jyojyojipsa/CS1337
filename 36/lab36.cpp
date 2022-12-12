// Kangmin Kim
// CS 1337
// Lab 36

// largestUsingIndexing:  receives an n-element integer array and returns
// the index of the largest element; the function uses indexing
int largestUsingIndexing(const int array[], int n)
{
	int i, largestIndex = 0, largestValue;
	
	largestValue = array[largestIndex];
	
	// loop through the remaining elements
	for (i = 1; i < n; i++)
	{
		if ( array[i] > largestValue )
		{
			largestValue = array[i];
			largestIndex = i;
		}
		
	}
	return largestIndex;
}

// largestUsingPointers:  receives an n-element integer array and returns
// a pointer to the largest element; the function uses pointers
int *largestUsingPointers(const int *array, int n)
{
	const int *ptr;
	const int *largestPtr;
	int largestValue;
	
	largestPtr = array;
	largestValue = *array;
	
	// loop through the remaining elements
	for (ptr = array + 1; ptr < array + n; ptr++)
	{
		if (*ptr > largestValue)
		{
			largestValue = *ptr;
			largestPtr = ptr;
		}
	}
	
	return const_cast<int *>(largestPtr);
}
