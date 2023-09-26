#include "sort.h"
/**
 * selection_sort -sorts an array using selection sort algorithm
 *
 * @array: array to be sorted
 * @size: the size of array to be sorted
 * Return: Nothin
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_Idx;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		/*Find the minimum element in the unsorted part of the array*/
		min_Idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_Idx])
			{
				min_Idx = j;
			}
		}
		/*Swap the found minimum element with the first element*/
		temp = array[i];
		array[i] = array[min_Idx];
		array[min_Idx] = temp;
		print_array(array, size);
	}
}
