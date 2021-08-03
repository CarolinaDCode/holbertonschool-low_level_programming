#include <stdio.h>
#include "lists.h"
/**
 *print_list - function that prints all the elements of a list_t
 *@h: h
 *Return: number of elements
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while(h != NULL)
	{
		if (h->str == NULL)
			printf ("[0] (nil)\n");
		else
			printf ("[%u] %s\n", h->len, h->str);

		i++;
		h = h->next;
	}

	return (i);
}
