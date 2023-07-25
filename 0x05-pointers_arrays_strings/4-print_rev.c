#include"main.h"

/**
 * print_rev - prints a string in reverse,
 *		followed by a newline
 *
 * @s: string parameter to print
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	int i;

	for (i = '\0'; i >= *s[0]; --i)
	{
		_putchar(*s + 0);
	}
	_putchar('\n');
}
