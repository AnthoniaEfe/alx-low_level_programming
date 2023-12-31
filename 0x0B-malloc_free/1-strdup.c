#include "main.h"

/**
 * _strdup - returns pointer to newly allocated memory space
 *	containing a copy of str
 *
 * @str: source string
 *
 * Return: pointer to duplicated string,
 *	NULL if available memory is insufficient
 */

char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}
