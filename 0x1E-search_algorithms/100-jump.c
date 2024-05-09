#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using
 *               the Jump search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if value is not
 *         present in array or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t prev = 0;
	size_t i = 0;
	size_t j;

	if (!array)
		return (-1);

	/* Finding the block where the element is present */
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		prev = i;
		i += jump;
	}

	/* Linear search for value in the block beginning with prev */
	printf("Value found between indexes [%ld] and [%ld]\n", prev, i);
	for (j = prev; j < i && j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return ((int)j);
	}

	return (-1);
}
