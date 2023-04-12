#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  *
  * @array: A pointer to the first element of the array to search.
  * @size : The number of elements in the array.
  * @value: Value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value each time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */

int jump_search(int *array, size_t size, int value)
{
	int index, m, l, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	l = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		l++;
		prev = index;
		index = l * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
