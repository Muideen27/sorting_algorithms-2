#include "sort.h"
/**
 * quick_sort - sort an array of integers using quick_sort
 *
 * @array: array to sort
 * @size: the size of the array to sort
 */
void quick_sort(int *array, size_t size)
{
	unsigned long int pivot;

	srand(getpid());
	pivot = rand() % size;

	printf("%ld\n", pivot);

	return;

}
