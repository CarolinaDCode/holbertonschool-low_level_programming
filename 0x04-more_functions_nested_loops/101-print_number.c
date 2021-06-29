#include <stdlib.h>
#include "holberton.h"
/* more headers goes there */
#include <stdio.h>
/**
 * print_number - a function that prints an integer
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
	int cont = 1;
	unsigned int numOriginal;
	int i;
	int uniq = 0;
	int divisor;
	int veces;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	numOriginal = n;

	while (n > 9)
	{
		n = n / 10;
		cont++;
	}

	for (i = cont ; i > 0 ; i--)
	{

		veces = 1;
		divisor = 1;

		while (veces < i)
		{
			divisor = divisor * 10;
			veces++;
		}

		uniq = (numOriginal / divisor) % 10;
		_putchar(uniq + '0');
	}
}
