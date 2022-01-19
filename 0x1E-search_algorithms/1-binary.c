#include "search_algos.h"

/**
* binary_search -  searches for a value in a sorted array of integers
* @array:  is a pointer to the first element of the array
* @size: is the number of elements in array
* @value: is the value to search for
* Return: return value or -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, i;
	size_t right = size - 1, mid;

	if (array == NULL || size == 0)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		mid = (left + right) / 2;
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
