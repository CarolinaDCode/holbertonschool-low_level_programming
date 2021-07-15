#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: strs
 *
 * Return: newStr
 *
 */
char *_strdup(char *str)
{
	char *newStr;
	int i, size = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		size++;

	newStr = (char *)malloc(size + 1 * sizeof(char));

	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		newStr[i] = str[i];

	return (newStr);
}
