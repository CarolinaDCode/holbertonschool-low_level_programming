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
	(void) argv;
	printf("%d\n", argc-1);
	return (0);
	/*aqui necesito que le reste uno a cantidad de
	  argumentos pasados*/
}
