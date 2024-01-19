#include "sort.h"

void swap(int *i, int *j);

/**
 * selection_sort - sorts an array of intergers in ascending order
 * @array: array of intergers
 * @size: array size
 */

void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i;
	size_t j;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;

		for (j = i + 1; j < size; j++)
			min = (array[j]  < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap(array + i, min);
			print_array(array, size);
		}
	}
}

/**
 * swap - swaps two integers
 * @i: first interger
 * @j: second integer
 */

void swap(int *i, int *j)
{
	int temp;

	temp = *i;
	*i = *j;
	*j = temp;
}
