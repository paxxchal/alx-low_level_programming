#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to return, starting from 0
 *
 * Return: pointer to the nth node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        dlistint_t *current;
        unsigned int i;

        current = head;
        for (i = 0; i < index && current != NULL; i++)
                current = current->next;

        return (i == index) ? current : NULL;
}
