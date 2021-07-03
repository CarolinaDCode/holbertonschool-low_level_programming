#include "holberton.h"
/**
 * _strncpy - a function that copies a string
 * @dest: string to copy to
 * @src: string to copy
 * @n: bytes from src to be copied
 * Return: a pointer to the resulting string dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int iterador;

	for (iterador = 0; iterador < n && src[iterador] != '\0'; iterador++)
	{
		dest[iterador] = src[iterador];
	}

	for ( ; iterador < n; iterador++)
	{
		dest[iterador] = '\0';
	}

	return (dest);
}
