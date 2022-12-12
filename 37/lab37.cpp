// Kangmin Kim
// CS 1337
// Lab 37



// reverseArrayUsingIndexing:  Using indexing, this function reverses
// the elements of the n-element integer array in place; that is, the
// function exchanges the first and last elements, the second and
// next-to-last elements, and so on.
void reverseArrayUsingIndexing(int array[], int n)
{
	int i,j, temp;
	for ( i = 0, j = n-1; i < j; i++, j--)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
}

// reverseArrayUsingPointers:  Using pointers, this function reverses
// the elements of the n-element integer array in place; that is, the
// function exchanges the first and last elements, the second and
// next-to-last elements, and so on.
void reverseArrayUsingPointers(int *array, int n)
{
	int *ptr, *ptr2, temp;
	for ( ptr = array, ptr2 = array+n-1; ptr < ptr2 ; ptr++,ptr2--)
	{
		
		temp = *ptr;
		*ptr = *ptr2;
		 *ptr2 = temp;
	}
}
