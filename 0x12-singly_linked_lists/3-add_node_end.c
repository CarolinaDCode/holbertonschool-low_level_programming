#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: head
 * @str: str
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int chars = 0;
	list_t *new_note;
	list_t *nodo_head;

	nodo_head = *head;
	new_note = malloc(sizeof(list_t));

	if(new_note == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	while (str[chars] != '\0')
		chars++;

	new_note->len = chars;

	new_note->str= strdup(str);

	new_note->next = NULL;

	if (*head == NULL)
		*head = new_note;
	else
	{
		while (nodo_head->next != NULL)
			nodo_head = nodo_head->next;
		nodo_head->next = new_note;
	}
	return (new_note);
}
