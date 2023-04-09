#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int present;
	unsigned long int exclusive = n ^ m;

	i = 63;
	present = exclusive >> i;
	while (exclusive)
	{
		if (present & 1)
			count++;
		exclusive <<= 1;
		i--;
	}
	return (count);
}
