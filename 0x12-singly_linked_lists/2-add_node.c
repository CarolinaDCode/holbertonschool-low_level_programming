#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: head
 * @str: str
 * Return: elements.
 */
list_t *add_node(list_t **head, const char *str)
{
	int chars = 0;
	list_t *new_note;

	new_note = malloc(sizeof(list_t));

	if (new_note == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	while (str[chars] != '\0')
		chars++;

	new_note->len = chars;

	new_note->str= strdup(str);

	if (*head == NULL)
		new_note->next = NULL;
	else
		new_note->next = *head;
	*head = new_note;

	return (new_note);
}
