#include "sort.h"
/**
 * selection_sort - sort an array of integers using selection sort
 *
 * @array: the array to order
 * @size: the siz of the array to order
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int i = 0, j = 0, smallest = 0;
	int *swap = NULL;

	if (!array || size < 2)
		return;
	for (; i < size; i++)
	{
		smallest = i; /* set current as minimum */
		swap =  malloc(sizeof(int) * 1);
		*swap = *(array + i);
		for (j = i + 1; j < size; j++)
		{
			if (*(array + j) < *(array + smallest))
			{
				smallest = j; /* update minimum index*/
			}
		}
		if (i < smallest)
		{
		*(array + i) = *(array + smallest);
		*(array + smallest) = *swap;
		free(swap);
		print_array(array, size);
		}
		else
			free(swap);
	}
}
