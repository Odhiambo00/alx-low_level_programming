#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *next;

	if (!ht)
		return;
	while (i < ht->size)
	{
		while (ht->array[i])
		{
			next = ht->array[i]->next;

			if (ht->array[i]->key)
				free(ht->array[i]->key);
			if (ht->array[i]->value)
				free(ht->array[i]->value);
			ht->array[i]->key = NULL;
			ht->array[i]->value = NULL;
			free(ht->array[i]);
			ht->array[i] = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
