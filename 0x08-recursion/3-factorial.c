#include "holberton.h"
/**
 * factorial - returns the factorial of a given number
 * @n: pointer to string
 * Return: void
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
