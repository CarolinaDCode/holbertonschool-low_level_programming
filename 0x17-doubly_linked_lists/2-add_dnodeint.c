#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning of a list
 * @head: head of the doubly linked list
 * @n: data to insert in the list
 *
 * Return: the address of the new element of NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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

/*Ingresa en nuevo nodo(siguiente) con su valor*/
	new_node->n = n;

/*el nodo nuevo pasa a ser el primero*/
/*y este nodo apuntara al nodo*/
/*que antes era primero y ahora es segundo :v*/
	new_node->next = new_head;

/*El nuevo nodo(o primer nodo), no apunta a nada, siempre será NULL*/
	new_node->prev = NULL;

/*El head apunta al prev*/
/*del que ahora es el segundo nodo, para retroceder*/
	new_head->prev = new_node;

/*head apunta al nodo que recien esta entrando,*/
/*y que pasará a ser el primero*/
	*head = new_node;

	return (new_node);
}
