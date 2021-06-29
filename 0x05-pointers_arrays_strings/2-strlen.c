#include "holberton.h"
#include <string.h>

/**
 * _strlen - calculate the lenght of a string
 * @s: input string
 * Return: will return 1 for each element of the array that is different from null
 */
int _strlen(char *s)
{
	int iterador = 0;

	while (s[iterador] != '\0')
	{
		iterador++;
	}
	return (iterador);
}
