#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: n
 * Return: binario
 */
void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		putchar(n + '0');
		return;
	}
	else
	{
		if (n == 0)
			return;
		else
			print_binary(n >> 1);
		putchar((n & 1) + '0');
    }
}
