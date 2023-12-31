#include "main.h"

/**
 * print_diagsums - print sum of two diagonals
 *		of a square matrix of integers
 * @a: input pointer
 * @size: size of the matrix
 *
 * Return: no return
*/

void print_diagsums(int *a, int size)
{
	int i, S1, S2;

	i = 0;
	S1 = 0;
	S2 = 0;

	while (i < (size * size))
	{
		if (i % (size + 1) == 0)
			S1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			S2 += a[i];

		i++;
	}
	printf("%d, %d\n", S1, S2);
}
