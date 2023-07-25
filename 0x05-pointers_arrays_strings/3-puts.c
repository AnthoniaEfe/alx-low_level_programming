#include "main.h"
/**
 * _puts - returns a string followed by a new line
 *
 * @str: string parameter input
 *
 * Return: length of string
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
		_putchar('\n');
}
