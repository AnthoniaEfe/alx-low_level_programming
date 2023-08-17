#include "variadic_functions.h"

/**
 * print_strings - prints strings,then a new line
 *
 * @separator: string printed between the strings
 * @n: number of unnamed parameters
 *
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list va;

	va_start(va, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(va, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(va);
}
