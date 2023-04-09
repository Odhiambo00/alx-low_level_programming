#include "main.h"

/**
 * get_bit - returns the value a bit at a given index
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: vakue of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 (-1)))
		return (-1);

	return ((n & (1UL << index)) ? 1 : 0);
}
