#include "sort.h"

/**
 * swap - swaps elements
 * @first_element: number to sort
 * @second_element: number to sort
 */
void swap(int *first_element, int *second_element)
{
	int temp = *first_element;
	*first_element = *second_element;
	*second_element = temp;
}

/**
 * partition - divides the array to sort
 * @array: array to be sorted
 * @low: left side of the array
 * @high: right side of the array
 * @size: size of the array
 * Return: returns idx
 */
int partition(int *array, int low, int high, size_t size)
{
	int i = low, j, pivot = array[high];

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			if (array[i] != array[j])
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != high)
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
	return (i);
}

/**
 * quick_sort - sorts the array with quick sort
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	recursion(array, 0, size - 1, size);
}

/**
 * recursion - applies recursive divide and conquer of the quick sort algo..
 * @array: array ot be sorted
 * @low: right side of the array
 * @high: left side of the array
 * @size: size of the array
 */
void recursion(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		recursion(array, low, pivot - 1, size);
		recursion(array, pivot + 1, high, size);
	}
}
