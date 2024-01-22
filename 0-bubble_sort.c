#include "sort.h"

/**
 * bubble_sort - Sorts and prints an array of integers in ascending order
 * using the Bubble Sort algorithm.
 *
 * @array: Array of integers to be sorted.
 * @size: Number of elements in the array.
 */

void bubble_sort(int *array, size_t size)
{
size_t i, len = size;
bool sorted = false;

	if (array == NULL || size < 2)
	{
		return;
	}

	while (!sorted)
	{
		sorted = true;

		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_int(array + i, array + i + 1);
				print_array(array, size);
				sorted = false;
			}
		}
		len--;
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
