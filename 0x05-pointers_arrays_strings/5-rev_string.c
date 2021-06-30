#include "holberton.h"
/**
 * rev_string - a function that reverses a string
 * @s: input string
 * Return: Void
 *
 */
void rev_string(char *s)
{
	int listaInvertida = 0, iterador = 0;
	char cadena[20];

	while (s[iterador] != '\0')
	{
		cadena[iterador] = s[iterador];
		iterador++;
	}

	while (iterador > 0)
	{
		s[listaInvertida] = cadena[iterador - 1];
		iterador--;
		listaInvertida++;
	}
}
