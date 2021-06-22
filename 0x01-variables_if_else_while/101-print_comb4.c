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
	int a = 48;
	int b = 49;
	int c = 50;

	while (a < 56)
	{
		while (b < 57)
		{
			while (c < 58)
			{
				if ((a < b) && (b < c))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a < 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			c = 50;
			b++;
		}
		b = 49;
		a++;
	}
	putchar('\n');

	return (0);
}
