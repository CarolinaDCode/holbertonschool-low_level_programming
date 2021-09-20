#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t.
 * @head: head.
 * @index: index.
 * Return: return_node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	while (head != NULL)
	{
		if (i == index)
		{
			temp = head;
			return (temp);
		}
		head = head->next;
		i++;
	}

	return (NULL);
}
