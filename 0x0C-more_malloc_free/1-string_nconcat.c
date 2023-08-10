#include "main.h"

/**
 * string_nconcat - function concatenates two strings
 *
 * @s1: first char
 * @s2: second char
 * @n: unsigned int
 *
 * Return: NULL, if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
	char *s;

	/* find length of string s1 */
	if (s1 == NULL)
	{
		x = 0;
	}
	else
	{
		for (x = 0; s1[x]; ++x)
		;
	}

	/* find length of string s2 */
	if (s2 == NULL)
	{
		y = 0;
	}
	else
	{
		for (y = 0; s2[y]; ++y)
		;
	}

	/* allocating memory space */
	if (y > n)
		y = n;
	s = malloc(sizeof(char) * (x + y + 1));

	/* contatenating strings */
	if (s == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		s[z] = s1[z];
	for (z = 0; z < y; z++)
		s[z + x] = s2[z];
	s[x + y] = '\0';
	return (s);
}
