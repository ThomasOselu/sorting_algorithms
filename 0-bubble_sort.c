#include <stdio.h>
#include <stdbool.h>
#include "sort.h"
/**
 * bubble_sort -sorts an array of integers in ascending
 * order using the Bubble sort
 * @array: the array containing the elements to order
 * @size: the number of elements in the array
 *
 * Return: array in ascending order
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp = 0;
	bool swap;

	for (i = 0; i < size - 1; i++)
	{
		swap = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				swap = true;
				print_array(array, size);
			}
		}
		if (swap == false)
			break;
	}
}
