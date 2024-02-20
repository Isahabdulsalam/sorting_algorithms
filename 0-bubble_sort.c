#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, unsorted_idx, sorted_idx;
	int temp;

	if (array == NULL || size < 2)
		return;

	unsorted_idx = size;
	while (unsorted_idx > 0)
	{
		sorted_idx = 0;
		for (i = 0; i < unsorted_idx - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				sorted_idx = i + 1;
				print_array(array, size);
			}
		}
		unsorted_idx = sorted_idx;
	}
}
