#include "hash_tables.h"

/**
 * hash_table_get - gets the value of a key
 * @ht: hash table
 * @key: key whose value is to be found
 * Return: value of the given key or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;

	if (ht)
	{
		index = key_index((const unsigned char *)key, ht->size);

		while (ht->array[index])
		{
			if (strcmp(ht->array[index]->key, key) == 0)
				return (ht->array[index]->value);
			ht->array[index] = ht->array[index]->next;
		}
		return (NULL);
	}
	return (NULL);
}
