#include "sort.h"
/* Function to perform quick sort */
void quick_sort_helper(int *array, size_t low, size_t high, size_t size)
{
	int pi;

	if (low < high)
	{
		/* Partition the array into two sub-arrays */
		pi = partition(array, low, high, size);
		/* Recursively sort the sub-arrays */
		quick_sort_helper(array, low, pi - 1, size);
		quick_sort_helper(array, pi + 1, high, size);
	}
}

/* Function to perform quick sort */
void quick_sort(int *array, size_t size)
{
	/* Call the helper function with appropriate initial values */
	quick_sort_helper(array, 0, size - 1, size);
}

/* Function to partition the array */
int partition(int *array, size_t low, size_t high, size_t size __attribute__((unused)))
{
	size_t j;
	int pivot= array[high]; /* Choose the rightmost element as the pivot */
	size_t i = low - 1; /* Initialize the index of the smaller element */

	for (j = low; j <= high - 1; j++)
	{
		/* If the current element is smaller than or equal to the pivot */
		if (array[j] <= pivot)
		{
			i++; /* Increment the index of the smaller element */
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);

	return (i + 1);
}

/* Function to swap two elements */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
