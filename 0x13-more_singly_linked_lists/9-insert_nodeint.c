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
		/*hasta que i llegue a ser 5 se seguirá iterando*/
		/**tmp_node apuntara a la siguiente estructura hasta*/
		/*que llegue a la posicion de idx*/
		if (tmp_node != NULL)
			tmp_node = tmp_node->next;
		else
			return (NULL);
		i++;
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/*a new_node se le asignará el valor que se le da*/
	/*en el main al llamar a la función*/
	new_node->n = n;

	/*En caso idx sea 0 a new_node se le asignara el valor al*/
	/*que apunta *head que es el valor de 0*/
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else if (tmp_node)
	{
		/*En caso idx tenga un valor que no es cero a new_node que*/
		/*anteriormente se le asigno un espacio con malloc que es una*/
		/*estructura, esta tendra un puntero que apuntara al nodo*/
		/*al que apunta tmp_node que es el nodo de 98, a este nodo*/
		/*new_node asumira la posicion 5 y su puntero direccionara*/
		/*a 98 y con tmp_nod->next = new_node, el puntero de 4 ahora*/
		/*direccionara al nuevo puntero*/
		new_node->next = tmp_node->next;
		tmp_node->next = new_node;
	}
	return (new_node);
}
