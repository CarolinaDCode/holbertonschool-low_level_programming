#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a list
 * @h: the pointer that points to the struct
 * Return: the number of elements in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
