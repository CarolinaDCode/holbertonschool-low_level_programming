#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: input string
 * Return: the length of the string
 *
 */
void print_rev(char *s)
{
	int iterador = 0;

	while (s[iterador] != '\0')
	{
		iterador++;
	}

	iterador--;
	while (iterador >= 0)
	{
		_putchar(s[iterador]);
		iterador--;
	}
	_putchar('\n');
}
