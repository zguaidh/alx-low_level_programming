#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t half, i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("searching in array: %d", array[low]);
		for (i = low + 1; i <= high; i++)
			printf(", %d", array[i]);
		printf("\n");

		half = low + ((high - low) / 2);

		if (value == array[half])
			return (half);
		else if (value > array[half])
			low = half + 1;
		else
			high = half - 1;
	}

	return (-1);
}
