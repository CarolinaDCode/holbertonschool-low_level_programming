#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @c: input string
 * Return: modified input string
 *
 */
char *leet(char *c)
{
	int it;
	int j;
	char leet[] = "4433007711";
	char l[] = "aAeEoOtTlL";

	for (it = 0; c[it] != '\0'; it++)
	{
		for (j = 0; l[j] != '\0'; j++)
			if (c[it] == l[j])
				c[it] = leet[j];
	}
	return (c);
}
