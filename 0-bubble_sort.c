#include "sort.h"

/**
 * bubble_sort -sort an array using bubble sort algorithm in ascending order
 * @array: the array to be sorted
 * @size: the array size
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, k;
	int temp;

	/*outer loop iterates through the array*/
	for (j = 0; j < size - 1; j++)
	{
		/*inner loop compares adjacent items and swaps them if need be */
		for (k = 0; k < size - j - 1; k++)
		{
			if (array[k] > array[k +1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
