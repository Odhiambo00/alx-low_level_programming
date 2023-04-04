#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *@head: listint_t list to be feed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
