#include "lists.h"
/**
 * print_dlistint - doubly linked list node structure
 * @h: pointer to head of list
 *
 * description: doubly linked list node structure
 * for Holberton project
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
