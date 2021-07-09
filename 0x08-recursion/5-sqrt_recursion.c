#include "holberton.h"
/**
 * _sqrt - function return the natural square
 * @n: pointer to string
 * @x: pointer to string
 * Return: _sqrt
 */
int _sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);

	return (_sqrt(n, x + 1));
}

#include "holberton.h"
/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 * @n: pointer to string
 * Return: _sqrt_recursion
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (_sqrt(n, 2));
}
