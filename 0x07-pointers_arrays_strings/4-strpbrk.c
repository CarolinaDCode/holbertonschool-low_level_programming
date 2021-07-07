#include "holberton.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: search key
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
			if (s[i] == accept[x])
			{
				return (s + i);
			}
	}
	return ('\0');
}
