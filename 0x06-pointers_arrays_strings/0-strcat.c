#include "holberton.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: string to copy to
 * @src: string to copy
 * Return: a pointer to the resulting string dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int iterador = 0;
	int element = 0;

	while (dest[iterador] != '\0')
	{
		iterador++;
	}

	while (src[element] != '\0')
	{
		dest[iterador + element] = src[element];
		element++;
	}
	return (dest);
}
