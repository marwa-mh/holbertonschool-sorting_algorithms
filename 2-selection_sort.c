#include "sort.h"
/**
 * selection_sort - Sorts an array using selection sort
 * @array: the array
 * @size: size of array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	int i, j, swap, smallest, s_index = 0;

	for (i = 0; i < size; i++)
	{
		smallest = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[i] && array[j] < smallest)
			{
				smallest = array[j];
				s_index = j;
			}
		}
		if (array[i] > smallest)
		{
			swap = array[i];
			array[i] = smallest;
			array[s_index] = swap;
			print_array(array, size);
		}
	}
}
