#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a list.
 * @head: head
 * Return:  the sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	listint_t *copy_head = head;
	int cont = 0;

	if (copy_head == NULL)
		return (0);

	while (copy_head != NULL)
	{
		cont += copy_head->n;
		copy_head = copy_head->next;
	}
	return (cont);

}
