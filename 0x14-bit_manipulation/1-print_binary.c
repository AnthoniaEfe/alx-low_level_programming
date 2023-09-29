#include "main.h"

/**
 * print_binary - function prints binary rep of a number
 *
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current_dig;

	for (i = 63; i >= 0; i--)
	{
		current_dig = n >> i;

		if (current_dig & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
