#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program that performs simple operations.
 * @argc: number of parameter given to main.
 * @argv: double pointer with parameter given to main.
 *
 * Return: result of the operation.
 */

int main(int argc, char **argv)
{
	int a = 0;
	int b = 0;
	char *x;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(*(argv + 1));
	x = *(argv + 2);
	b = atoi(*(argv + 3));

	if (get_op_func(x) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*(*(argv + 2)) == '/' || *(*(argv + 2)) == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(x))(a, b));

	return (0);
}
