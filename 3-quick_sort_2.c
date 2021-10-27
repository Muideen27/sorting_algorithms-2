#include "sort.h"

/* ################################################ */

/*                         88            88         */
/*                         ""            88         */
/*                                       88         */
/*  ,adPPYb,d8 88       88 88  ,adPPYba, 88   ,d8   */
/* a8"    `Y88 88       88 88 a8"     "" 88 ,a8"    */
/* 8b       88 88       88 88 8b         8888[      */
/* "8a    ,d88 "8a,   ,a88 88 "8a,   ,aa 88`"Yba,   */
/*  `"YbbdP'88  `"YbbdP'Y8 88  `"Ybbd8"' 88   `Y8a  */
/*          88                                      */
/*          88                                      */
/*                                    ,d            */
/*                                    88            */
/* ,adPPYba,  ,adPPYba,  8b,dPPYba, MM88MMM         */
/* I8[    "" a8"     "8a 88P'   "Y8   88            */
/*  `"Y8ba,  8b       d8 88           88            */
/* aa    ]8I "8a,   ,a8" 88           88,           */
/* `"YbbdP"'  `"YbbdP"'  88           "Y888         */

/* ################################################ */

/* prototypes ##################################### */
void sort(int *array,  long int low,  long int high,
size_t size);
long int partition(int *array,  long int low,
long int high, size_t size);
void swap(int *a, int *b);
/* ################################################ */

/**
 * quick_sort - sort an array of integers using quick_sort
 *		lomuto implementation with pivot in last element of partition
 * @array: array to sort
 * @size: the size of the array to sort
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	sort(array, 0, size - 1, size);
}

/**
 * sort - recursion to implement the quicksort (Lomuto version)
 *
 * @array: the array to sort
 * @low: where begins the partition
 * @high: where ends the partition
 * @size: the total size of array to be printed
 */
void sort(int *array,  long int low,  long int high,
size_t size)
{
	long int pivot = 0;

	/* validate indices and if partition is greater than 1 */
	if (low < high)
	{
		/* partition and get pivot */
		pivot = partition(array, low, high, size);
	}
	else
		return;
	/* recursion to sort the two partitions */
	/* left partition */
	sort(array, low, pivot - 1, size);
	/* right parttion */
	sort(array, pivot + 1, high, size);

}
/**
 * partition - partition elements in two
 * @array: the array to be partitioned
 * @low: where the partitions begin and is less than right
 * @high: where the partitions end
 * @size: total lenght of the array
 * Return: the pivot index of the partition
 */
long int partition(int *array, long int low,
long int high, size_t size)
{
	long int pivot = 0, i = 0, j = 0;

	/* set pivot as last element */
	pivot = high;

	/* set the index */
	i = low - 1; /* to allow increment */

	for (j = low; j < high; j++)
	{
		if (*(array + j) < *(array + pivot))
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
				printf("i:%ld-j:%ld\n", i, j);
			}
		}
	}
	if (*(array + high) < *(array + i + 1))
	{
		swap(&array[high], &array[i + 1]);
		print_array(array, size);
		printf("high:%ld, i+1:%ld\n", high, i + 1);
	}

	/* return new pivot pointer */
	return (i + 1);
}

/**
 * swap - swap to integer's values
 *
 * @a: first integer
 * @b: second integer
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
