#include "main.h"
/**
 * puts2 - prints every other character in string
 *		starting from the first character
 *		followed by a new line
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i] + 0);
		else
			continue;
	}
	_putchar('\n');
}
