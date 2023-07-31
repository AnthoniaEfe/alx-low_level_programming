#include "main.h"

/**
 * _strchr - a function that locates a char in a string
 *
 * @s: pointer to string array input
 * @c: char to locate from input array
 *
 * Return: first occurence of char or NULL if not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	/**
	 * if c is '\0', return the pointer
	 * to '\0' of the string, s
	*/
	if (*s == c)
		return (s);

	/*return null if not found*/
	return ('\0');
}
