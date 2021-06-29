#include <stdlib.h>
#include "holberton.h"
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
void print_number(int n)
{
	int cont = 1;
	int numOriginal;
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
