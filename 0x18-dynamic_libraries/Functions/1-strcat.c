#include "main.h"

/**
 * _strncat - function definition
 * @dest: second string value
 * @src: first string value
 * @n: number of time
 * Description: concatenates number of times
 * Return: character string value
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}

