#include "lists.h"

/**
 * print_list - prints all the elements of a list
 *
 * @h: pointer to the list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	/*return 0 as number of nodes*/
	if (h == NULL)
		return (0);

	while (h)
	{
		/*if str is NULL return len as 0 and str as (nil)*/
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		/*go to the next node*/
		h = h->next;
		/*count number of nodes*/
		s++;
	}

	return (s);
}
