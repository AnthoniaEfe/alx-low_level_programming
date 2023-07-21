#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times '\'
 */

void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; ++i)
		{
			for (space = 1; space <= i; ++space)
				_putchar(' ');
			_putchar(92); /*ASCII code for '\'*/
			_putchar('\n');
		}
	}
}
