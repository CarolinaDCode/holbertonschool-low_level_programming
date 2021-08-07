#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: head
 * @index: index
 * Return: the nth node of a linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int cont = 0;
    listint_t *copy_head = head;

    if (copy_head == NULL)
        return (NULL);

    while (copy_head != NULL)
    {
        if (cont == index)
            return (copy_head);
        copy_head = copy_head->next;
        cont++;
    }
    return (NULL);

}
