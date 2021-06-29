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

	iterador--; /* le restará 1 al 63, para que el siguiente while no tome en cuenta al caracter nulo*/
	while (iterador >= 0)
	{
		_putchar(s[iterador]);
		iterador--;
	}
	_putchar('\n');
}
