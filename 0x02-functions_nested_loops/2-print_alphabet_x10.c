#include "holberton.h"

/**
 * print_alphabet_x10 - return the alphabet 10 times
 *
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{
	char letra;
	int a;

	for (a = 1 ; a <= 10 ; a++)
	{
	for (letra = 'a' ; letra <= 'z' ; letra++)
	{
		_putchar(letra);
	}
	_putchar('\n');
	}
}
