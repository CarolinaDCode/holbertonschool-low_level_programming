#include "holberton.h"

/**
 * _abs - returns absolute value of input
 *@x: the input
 * Return: x is absolute value
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
}
