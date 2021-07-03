#include <stdio.h>
#include "holberton.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in array
 * Return: void
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{

		if (i != 0)
		{
			printf(", ");
		}
		i++;

		printf("%d", a[n - i]);

	}
	printf("\n");
}
