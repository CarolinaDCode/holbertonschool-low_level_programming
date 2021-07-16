#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using
 * @b: b
 *
 * Return: a
 *
 */
void *malloc_checked(unsigned int b)
{

	void *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
