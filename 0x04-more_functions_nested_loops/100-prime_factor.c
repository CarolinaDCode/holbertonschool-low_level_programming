#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{

	int b, x;
	long int a = 612852475143;

	for (b = 2 ; b <= a ; b++)
	{
		while (a % b == 0)
		{
			a = a / b;
			x = b;
		}
	}
	printf("%d\n", x);
	return (0);
}
