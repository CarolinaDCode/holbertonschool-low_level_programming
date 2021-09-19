#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
