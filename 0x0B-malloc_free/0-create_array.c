#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - creates an array of chars, and initializes it with a char
 * @size: size if the array
 * @c: character
 * Return: letter
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *letter = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (letter == NULL)
	{
		printf("fails\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(letter + i) = c;/*letter[i]*/
	}

	return (letter);
}
