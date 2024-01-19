#include "sort.h"

void swap(int *i, int *j);

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of intergers
 * @size: array size
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t len = size;
	bool bubble = false;

	if (array == NULL || size < 2)
	{
		return;
	}

	while (bubble == false)
	{
		bubble = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				bubble = false;
			}
		}
		len--;
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
