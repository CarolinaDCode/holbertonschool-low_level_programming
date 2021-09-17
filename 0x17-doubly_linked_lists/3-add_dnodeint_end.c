#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a dlistint_t.
 * @head:head
 * @n:n
 * Return: new_node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *new_head = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (new_head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		new_node->n = n;

		*head = new_node;
		return (new_node);
	}
	while (new_head->next != NULL)
	{
		new_head = new_head->next;
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = new_head;
	new_head->next = new_node;
	return (new_node);
}
