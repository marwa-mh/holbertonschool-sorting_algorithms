#include "sort.h"
/**
 * partition- Sorts an array using quick sort algorithm
 * @array: the array
 * @low: low
 * @high: high
 * @size: size of array
 * Return: Nothing
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high], swap, i = low - 1, j;

	for (j = low; j <= high - 1; j++)
		if (array[j] <= pivot)
		{
			i++;
			swap = array[j];
			array[j] = array[i];
			array[i] = swap;
			if (i != j)
				print_array(array, size);
		}
	swap = array[i + 1];
	array[i + 1] = array[high];
	array[high] = swap;
	if (i + 1 != high)
		print_array(array, size);
	return (i + 1);
}
/**
 * quick_sort_helper - Sorts an array using quick sort algorithm
 * @array: the array
 * @low: low
 * @high: high
 * @size: size of array
 * Return: Nothing
 */
void quick_sort_helper(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_sort_helper(array, low, pivot - 1, size);
		quick_sort_helper(array, pivot + 1, high, size);
	}
}
/**
 * quick_sort - Sorts an array using quick sort algorithm
 * @array: the array
 * @size: size of array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	int low = 0, high = size - 1;

	if (!array || size < 2)
		return;
	quick_sort_helper(array, low, high, size);
}
