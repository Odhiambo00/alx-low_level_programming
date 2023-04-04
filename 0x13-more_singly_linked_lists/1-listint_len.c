#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: A pointer to a node
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = o;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
