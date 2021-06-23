#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @x: the number
 * Return: last digit in a number
 */
int print_last_digit(int x)
{
	x = x % 10;
	if (x >= 0)
	{
		_putchar('0' + x);
	}
	else
	{
		x = x * -1;
		_putchar('0' + x);
	}
	return (x);
}
