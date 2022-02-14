#include "sort.h"

/**
 * swap - will swap elements in the array
 * @first_element: pointer to first number
 * @second_element: pointer to second number
 */

void swap(int *first_element, int *second_element)
{
	int temp = *first_element;
	*first_element = *second_element;
	*second_element = temp;
}

/**
 * bubble_sort - sorts the array as bubble implementation
 * @array: array being passed
 * @size: size of the array being passed
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
