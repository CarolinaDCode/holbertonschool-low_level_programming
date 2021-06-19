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
	char abc;

	for (abc = 'a' ; abc >= 'z' ; abc++)
	{
		putchar(abc);
		putchar('\n');
	}
	return (0);
}
