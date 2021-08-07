#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: idx
 * @n: n
 * Return: the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp_node = *head, *new_node;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);

	while (i < idx)
	{
		if (tmp_node != NULL)
			tmp_node = tmp_node->next;
		else
			return (NULL);
		i++;
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else if (tmp_node)
	{
		new_node->next = tmp_node->next;
		tmp_node->next = new_node;
	}
	return (new_node);
}
