#include "sort.h"
/**
 * bubble_sort - sort an array of integer in ascending order
 * @array: the array to order and print
 * @size: size of array to order
 */
void bubble_sort(int *array, size_t size)
{
	unsigned long int i = 0, j = 0;
	int *swap = NULL;
	
	if (size < 2) /*if array is less than 2 not need to be sorted*/
	return;

	for (i = size; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (*(array + j) > *(array + j + 1))
			{
				swap = malloc(sizeof(int) * 1);
				*swap = *(array + j);
				*(array + j) = *(array + j + 1);
				*(array + j + 1) = *swap;
				print_array(array, size);
				free(swap);
			}
		}
	}
}
