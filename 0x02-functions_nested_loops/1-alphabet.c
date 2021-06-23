#include "holberton.h"

/**
 * print_alphabet - letters lowercase
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char letra;

	for (letra = 'a' ; letra <= 'z' ; letra++)
	{
		_putchar(letra);
	}
	_putchar('\n');
}
