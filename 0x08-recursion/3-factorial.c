#include "main.h"

/**
 * factorial - function returns factorial of n
 *
 * @n: number
 *
 * Return: factorial of n
 *	1, if n=1
 *	-1, if n<0
 */

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
}
