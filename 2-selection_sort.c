#include "sort.h"
#include <stdio.h>
/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort
 * @array: the array of elements to sort
 * @size: size of the array
 *
 * Return: elements in ascending order
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_ele;
	int temp;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_ele = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_ele])
			{
				min_ele = j;
			}
		}
		if (min_ele != i)
		{
			temp = array[i];
			array[i] = array[min_ele];
			array[min_ele] = temp;
			print_array(array, size);
		}
	}
}
