#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concatenates two strings
 * @s1: s1
 * @s2: s2
 * Return: s
 *
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0;
	int i;
	char *newp;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			size1++;
	}

	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
			size2++;
	}

	newp = (char *)malloc(size1 + size2 + 1 * sizeof(char));

	if (newp == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		newp[i] = s1[i];

	for (i = 0; i < size2; i++)
		newp[i + size1] = s2[i];

	*(newp + size1 + size2) = '\0';

	return (newp);
}
