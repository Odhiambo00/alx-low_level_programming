#include "lists.h"

/**
 * sum_dlistint - return the sum of all data of dlistint_t list
 * @head: the head of the list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
