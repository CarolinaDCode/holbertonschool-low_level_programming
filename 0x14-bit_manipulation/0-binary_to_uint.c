#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an
 * @b: b
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0, e = 0, mul, i;
	if (b == NULL)
		return (0);

	while(b[len])
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[e] != '0' && b[e] != '1')
			return (0);

		if (b[e] == '1')
		{
			mul = 1;
			for (i = 0; i < len; i++)
				mul = mul*2;

			num += mul;
		}
		e++;
	}
	return (num);
}
