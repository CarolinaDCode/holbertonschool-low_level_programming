#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: n
 * @index: index
 * Return: the value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bin_max = sizeof(n) * 8;

	if (index > bin_max)
		return (-1);

	return ((n >> index) & 1);
}
