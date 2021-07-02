#include "holberton.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: string to copy to
 * @src: string to copy
 * @n: bytes from src to append
 * Return: a pointer to the resulting string dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int element = 0;
	int iterador = 0;

	while (dest[element] != '\0')
	{
		element++;
	}

	while (iterador < n && src[iterador] != '\0')
	{
		dest[element + iterador] = src[iterador];
		iterador++;
	}

	return (dest);
}
