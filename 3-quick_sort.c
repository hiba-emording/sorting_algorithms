#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order
 * using Quick Sort.
 *
 * @array: Array to be sorted.
 * @size: Size of the array.
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}

	_quick_sort(array, 0, size - 1, size);
}


/**
 * _quick_sort - Recursive function for Quick Sort.
 * @array: Array to be sorted.
 * @start: Starting index of the partition.
 * @end: Ending index of the partition.
 * @size: Size of the array.
 */

void _quick_sort(int *array, int start, int end, size_t size)
{
int i;
	if (start < end)
	{
		i = lomuto_partition(array, start, end, size);

		_quick_sort(array, start, i - 1, size);
		_quick_sort(array, i + 1, end, size);
	}
}


/**
 * lomuto_partition - Lomuto partition scheme for Quick Sort.
 * @array: Array to be partitioned.
 * @start: Starting index of the partition.
 * @end: Ending index of the partition.
 * @size: Size of the array.
 *
 * Return: The final position of the pivot element.
 */

int lomuto_partition(int *array, int start, int end, size_t size)
{
int elem = array[end];
int i = start - 1;
int j;

	for (j = start; j <= end - 1; j++)
	{
		if (array[j] <= elem)
		{
			i++;

			if (i != j)
			{
				swap_int(array + i, array + j);
				print_array(array, size);
			}
		}
	}

	if ((i + 1) != end)
	{
		swap_int(array + i + 1, array + end);
		print_array(array, size);
	}

	return (i + 1);
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
