#include "holberton.h"
/**
 * _strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: string to copy to
 * @src: string to copy
 * Return: the pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int ultimo = 0;

	while (src[ultimo] != '\0')
	{
		dest[ultimo] = src[ultimo];
		ultimo++;
	}
	dest[ultimo] = '\0';
	return (dest);
}
