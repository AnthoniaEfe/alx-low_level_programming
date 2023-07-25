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
		putchar(*str + 0);
	}
		putchar('\n');
}
