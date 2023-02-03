#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the first node of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
