#include"main.h"

/**
 * rev_string - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int i, len, temp;

	for (len = 0; s[len] != '\0'; ++len)
		;

	for (i = 0; i < len / 2; i++)
	{
		temp = str1[i];
		str1[i] = str1[len - i - 1];
		str1[len - i - 1] = temp;
	}
}
