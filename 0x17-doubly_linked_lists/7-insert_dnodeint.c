#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at a given post.
 * @h: h
 * @idx: idx
 * @n: n
 * Return: address.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node;
	dlistint_t *temp = *h;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = temp->next;
			new_node->prev = temp;
			if (temp->next != NULL)
			{
				temp->next->prev = new_node;/*98->prev*/
			}
			temp->next = new_node;/*4->next*/
			return (new_node);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
