#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n: number of parameters to sum.
 *
 *Return: sum of all its parameters
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int valor;
	int suma = 0;

	va_list parametros;

	if (n == 0)
		return (0);

	va_start(parametros, n);

	for (i = 0; i < n; i++)
	{
		valor = va_arg (parametros, int);
		suma += valor;
	}
	va_end (parametros);

	return (suma);
}
