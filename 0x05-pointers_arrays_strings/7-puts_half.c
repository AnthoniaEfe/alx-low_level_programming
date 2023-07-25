#include "main.h"

/**
 * puts_half - prints second half of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/

void puts_half(char *str)
{
	int i, len;

	for (len = 0; str[len] != '\0'; ++len)
		;

	if (len % 2 == 0)
	{
		for (i = len / 2; i <= len; ++i)
			_putchar(str[i] + 0);
	}
	else
	{
		for (i = len - 1 / 2; i <= len; ++i)
			_putchar(str[i] + 0);
	}
	_putchar('\n');
}
