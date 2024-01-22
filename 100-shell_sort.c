#include "sort.h"

/**
 * shell_sort - Sorts and prints an array of integers in ascending order
 * using the shell sort algorithm.
 *
 * @array: Array of integers.
 * @size: Size of the array.
 */

void shell_sort(int *array, size_t size)
{
size_t interval = 1, i, j;

	if (array == NULL || size < 2)
	{
		return;
	}

	while (interval < size / 3)
	{
		interval = interval * 3 + 1;
	}

	while (interval > 0)
	{
		for (i = interval; i < size; i++)
		{
			j = i;

			while (j >= interval && array[j - interval] > array[j])
			{
				swap_int(array + j, array + (j - interval));
				j -= interval;
			}
		}
		interval = (interval - 1) / 3;

		print_array(array, size);
	}
}

/**
 * swap_int - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */

void swap_int(int *a, int *b)
{
int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
