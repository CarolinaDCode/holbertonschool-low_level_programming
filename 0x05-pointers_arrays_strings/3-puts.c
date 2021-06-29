#include "holberton.h"
/**
 * _puts - prints a string to stdout
 * @str: input string
 * Return: void
 *
 */
void _puts(char *str)
{
	int iterador = 0;

	while (str[iterador] != '\0')
	{
		_putchar (str[iterador]);
		iterador++;
	}
	_putchar('\n');
}
