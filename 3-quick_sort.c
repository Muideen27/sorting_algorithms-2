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

}

/**
 * partition - partition elements in two
 * @array: the array to be partitioned
 * @left: where the partitions begin and is less than right
 * @right: where the partitions end
 */
void partition(int *array, int *left, int *right)
{
 
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
