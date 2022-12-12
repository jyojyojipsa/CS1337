// Kangmin Kim
// CS 1337
// Lab 40

// selectionSortUsingIndexing:  Using indexing, this function sorts
// in ascending order the n-element integer array using a selection sort.
void swap(int &a, int &b);

// selectionSortUsingPointers:  Using pointers, this function sorts
// in ascending order the n-element integer array using a selection sort.
void selectionSortUsingPointers(int *array, int n)
{
	int *index, *start;
	int *minIndex, minValue;

  for (start = &array[0]; start < &array[n-1]; start++)
  {
    minIndex = start;// start is adress -> minInddex should be adress-> show adress
    minValue = *start; // compatible
    for (index = start + 1; index < &array[n]; index++)
    {
      if (*index < minValue)
      {
        minValue = *index;
        minIndex = index;
      }
    }
    swap(*minIndex,*start);
  }
}
