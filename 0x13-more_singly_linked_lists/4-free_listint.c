#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Write a function that frees a list
 * @head: head
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *head_copy = head;
	listint_t *ptr;

	while (head_copy != NULL)
	{
		ptr = head_copy->next;
		free(head_copy);
		head_copy = ptr;
	}
	head = NULL;
}
