#include "holberton.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input string
 * Return: Void
 *
 */
void puts_half(char *str)
{
	unsigned int mitad, i = 0;

	while (str[i] != '\0')
		i++;

	if ((i + 1) % 2 == 0)
		mitad = (i + 1) / 2;
	else
		mitad = i / 2;

	while (mitad < i)
	{
		_putchar(str[mitad]);
		mitad++;
	}
	_putchar('\n');
}
