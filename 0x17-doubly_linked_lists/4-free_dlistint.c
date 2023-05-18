#include "lists.h"

/**
 * free_dlistint - frees a dlistint list
 * @head: the head of the list
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i);
	}
}
