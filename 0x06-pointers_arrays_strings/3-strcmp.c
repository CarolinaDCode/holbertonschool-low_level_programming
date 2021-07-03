#include "holberton.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: an integer result of the comparison
 *
 */
int _strcmp(char *s1, char *s2)
{
	int it = 0;

	while (s1[it] != '\0' && s2[it] != '\0')
	{
		if (s1[it] != s2[it])
		{
			return ((int) (s1[it] - s2[it]));
		}
		it++;
	}
	return (0);
}
