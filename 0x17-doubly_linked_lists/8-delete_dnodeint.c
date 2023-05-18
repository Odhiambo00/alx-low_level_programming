#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given position in dlistint_t
 * @head: the head of the list
 * @index: index of new node
 * Return: 1 if success, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	current = *head;

	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	if (current == *head)
		*head = current->next;
	else
		current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
