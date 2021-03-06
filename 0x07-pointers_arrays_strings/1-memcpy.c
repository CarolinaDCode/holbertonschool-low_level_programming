#include "holberton.h"
/**
 * _memcpy -  a function that copies memory area
 * @src: pointer to be copied
 * @dest: pointer to copy to
 * @n: the number of bytes to be copied
 * Return: a pointer to dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
