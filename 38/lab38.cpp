// Kangmin Kim
// CS 1337
// Lab 38


// isIncreasingUsingIndexing:  Using indexing, this function returns
// true if the elements of the n-element array are in increasing
// order; that is, array[i] < array[i+1] for i = 0, 1, 2, ..., n-2.
// The function returns false otherwise.
bool isIncreasingUsingIndexing(const int array[], int n)
{
	int i,j;
	for( i = 0; i < n ; i++ )
	{
		for( j = i+1; j < n ; j++)
		{
			if ( array[j] <= array[i])
			{
				return false;
			}
		}
	}
	return true;
}


// isIncreasingUsingPointers:  Using pointers, this function returns
// true if the elements of the n-element array are in increasing
// order and false otherwise.
bool isIncreasingUsingPointers(const int *array, int n)
{
	const int *ptr,*ptr2; 
	for( ptr = array; ptr < array+n ; ptr++)
	{
		for(ptr2 = ptr+1; ptr2 <array+n ; ptr2++)
		{
			if(*ptr2 < *ptr)
				{
					return false;
				}
			}
	}
	return true;
}
