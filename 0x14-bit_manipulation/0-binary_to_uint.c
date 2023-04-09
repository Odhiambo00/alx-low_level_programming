#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int len;
	unsigned int num  = 0;

	if (b == NULL)
	{
		return (0);
	}

	len = strspn(b, "01");

	if (b[len] != '\0')
	{
		return (0);
	}
	for (i = 0; i < len; i++)
	{
		num <<= 1;
		if (b[i] == '1')
		{
			num += 1;
		}
	}

	return (num);
}

