#include"main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: array parameter
 * @n: number of elements parameter
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i != n)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	_putchar('\n');
}
