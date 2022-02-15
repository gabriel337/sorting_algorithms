#include "sort.h"

/**
 * shell_sort - sort the array with shell sort
 * @array: array to be sorted
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t idx, i, gap = 1;
	int tmp;

	if (array == NULL || size < 2)
		return;

	while (gap < size)
	{
		gap = gap * 3 + 1;
	}
	gap /= 3;

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			tmp = array[i];
			for (idx = i; idx >= gap && array[idx - gap] > tmp; idx -= gap)
			{
				array[idx] = array[idx - gap];
			}
			array[idx] = tmp;
		}
		gap /= 3;
		print_array(array, size);
	}
}
