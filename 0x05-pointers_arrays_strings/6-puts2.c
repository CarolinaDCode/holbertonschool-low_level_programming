#include "holberton.h"
/**
 * puts2 - prints one char out of 2 of a string
 * @str: input string
 * Return: Void
 *
 */
void puts2(char *str)
{
	unsigned int iterador = 0;

	while (str[iterador] != '\0')
	{
		if ((iterador % 2) == 0)
			_putchar(str[iterador]);
		iterador++;
	}
	_putchar('\n');
}
