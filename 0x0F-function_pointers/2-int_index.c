#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - function that searches for an integer
 *@array: array
 *@size: size
 *@cmp: pointer at the function
 *Return: Return value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((cmp)(array[i]) == 1)
				return (i);
		}
	}
	return (-1);
}
