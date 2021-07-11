#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments passed to program
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, x, suma = 0;

	for (i = 1; i < argc; i++)
	{

		for (x = 0; argv[i][x]; x++)
		{

			if (argv[i][x] <= 47 || argv[i][x] >= 58)
			{
				printf("Error\n");
				return (1);
			}

		}

		suma += atoi(*(argv + i));
	}

	printf("%d\n", suma);
	return (0);
}
