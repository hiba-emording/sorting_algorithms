#include "sort.h"

/**
 * selection_sort - Sorts and prints an array of integers in ascending order
 * using the selection sort algorithm.
 *
 * @array: Array of integers.
 * @size: Size of the array.
 */

void selection_sort(int *array, size_t size)
{
int *mini;

size_t i, j;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		mini = array + i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < *mini)
			{
				mini = array + j;
			}
		}

		if (array + i != mini)
		{
			swap_int(array + i, mini);
			print_array(array, size);
		}
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
