#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number of print in binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}
