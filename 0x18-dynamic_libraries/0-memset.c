#include "main.h"

/**
 * _memset - fills a memomry with constant byte b
 * @s: pointer to constant
 * @b: the constant byte
 * @n: number of bytes
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
