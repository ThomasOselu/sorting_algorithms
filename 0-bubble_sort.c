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
	bool is_sorted;

	for (i = 0; i < size; i++)
	{
		is_sorted = true;
		for (j = 1; j < size - i; j++)
		{
			if (array[j] < array[j - 1])
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
				is_sorted = false;
			}
		}
		if (is_sorted)
		{
			print_array(array, size);
			return;
		}
	}
}
