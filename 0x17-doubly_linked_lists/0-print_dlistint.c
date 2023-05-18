#include "lists.h"

/**
 * print_dlistint -prints all the elements
 * @h: the head of the list
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h);
{
	size_t count = 0;
	const dlist_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
