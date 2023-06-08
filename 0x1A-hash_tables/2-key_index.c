#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key whose index is to be gotten
 * @size: hash table size
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
