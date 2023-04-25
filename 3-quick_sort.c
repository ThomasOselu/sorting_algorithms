#include "sort.h"
#include <stdio.h>
/**
 * swap - swaps the elements in the needed order
 * @array: elements to be sorted
 * @i: first element
 * @j: an element
 * @size: an element
 * Return: Nothing
 */
void swap(int *array, int i, int j, int size)
{
	int tmp;

	if (array[i] != array[j])
	{
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
		print_array(array, size);
	}
}
/**
 * partition - creating the partition with the last element pivot
 * @array: array of elements to sort
 * @low: the lowest value
 * @high: the highest value
 * @size: the length of array
 *
 * Return:nothing
 */
int partition(int *array, int low, int high, size_t size)
{
	int i = low, j, pivot  = array[high];

	for (j = low; j <= high; j++)
	{
		if (array[j] < pivot)
		{
			swap(array, i, j, size);
			i++;
		}
	}
	swap(array, i, high, size);
	return (i);
}
/**
 * quicksort - sorts an array of integers in ascending order
 * using the quick sort algorithm
 * @array: array of elements
 * @low: lower value
 * @high:higher value
 * @size: array's size
 *
 * Return: Nothing
 */
void quicksort(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		quicksort(array, low, p - 1, size);
		quicksort(array, p + 1, high, size);
	}
}
/**
 * quick_sort- sorts an array of integers in ascending order using the
 * quick sort algorithm Lomuto partition scheme
 * @array:an array of elements to sort
 * @size: size of data
 *
 * Return: No Return
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}
