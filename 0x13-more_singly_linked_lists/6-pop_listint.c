#include <stdio.h>
#include "lists.h"

/**
 * pop_listint  - function that deletes the head node of a list
 * @head: head
 * Return: 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *copy_head = *head;
	int nodo_eliminado = 0;

	if (copy_head == NULL)
		return (0);

	nodo_eliminado = copy_head->n;
	*head = copy_head->next;
	free(copy_head);

	copy_head = NULL;
	return (nodo_eliminado);
}
