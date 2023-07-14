#include <stdio.h>
/**
 * main - entry point
 * Return: Always (0)
 */
int main(void)
{
	int i;
	/* Printing digits 0-9 */
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	/* Printing letters a-f */
	for (i = 10; i < 16; i++)
	{
		putchar(i + 'a' - 10);
	}
	putchar('\n');
	return (0);
}

