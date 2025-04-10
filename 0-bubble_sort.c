#include "sort.h"
#include <stdlib.h>
/**
 * bubble_sort - sort an array using bubble sort
 * @array: array of int
 * @size: size of array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, tmp;
	int completed = 0;

	while (completed == 0)
	{
		i = 0;
		completed = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				completed = 0;
				print_array(array, size);
			}
		}
	}
}
