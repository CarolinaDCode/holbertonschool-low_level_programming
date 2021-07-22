#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers - function that prints numbers, followed by a new line
 *@separator: comma
 *@n: number of parameters to sum
 *Return: void
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list parametros;

	va_start(parametros, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(parametros, int));
			if (separator != NULL && i < n - 1)
			{
			printf("%s", separator);
			}
		}
	printf("\n");
	va_end(parametros);

}
