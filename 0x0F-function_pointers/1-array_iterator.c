#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - function that executes a function given as a parameter
 *@array: array
 *@size: size
 *@action: pointer a function
 *Return void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			(action)(array[i]);
	}
}
