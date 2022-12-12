// Kangmin Kim
// CS 1337
// Lab 35


// sumUsingIndexing:  receives an n-element integer array and returns
// the sum of the elements; the function uses indexing
int sumUsingIndexing(const int array[], int n)
{
	int i, sum = 0;
	
	for (i = 0; i < n; i++)
	{
		sum += array[i];
	}
	
	return sum;
}
// sumUsingPointers:  receives an n-element integer array and returns
// the sum of the elements; the function uses pointers
int sumUsingPointers(const int *array, int n)
{
	// declaring ptr_fun
	//int *ptr;
	//int *const ptr;
	const int *ptr;
	//const int *const ptr;
	
	int sum = 0;
	
	for (ptr = array; ptr < array + n; ptr++)
	{
		sum += *ptr;
	}
	
	return sum;
}
