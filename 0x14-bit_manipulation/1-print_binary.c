#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned int bit_count = sizeof(n) * 8;
	int bit_set = 0;

	while (bit_count--)
	{
		if ((n >> bit_count) & mask)
		{
			bit_set = 1;
			_putchar('1');
		}
		else if (bit_set)
			_putchar('0');
	}

	if (!bit_set)
		_putchar('0');
}
