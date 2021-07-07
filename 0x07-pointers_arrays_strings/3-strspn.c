#include "holberton.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string to be searched
 * @accept: search key
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				break;
			}
		}
		if (accept[x] == '\0')
			break;

	}
	return (i);
}
