#include "main.h"

/**
 * _memcpy - copies bytes from a memory area
 * @dest: destination address
 * @src: source address
 * @n: number of times
 * Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
