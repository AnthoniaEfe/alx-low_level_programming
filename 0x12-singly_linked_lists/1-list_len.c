#include "lists.h"

/**
 * list_len - gets the number of nodes
 *
 * @h: pointer to the head node
 *
 * Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t node_count = 1;

	/*if head NULL, return 0 nodes*/
	if (h == NULL)
		return (0);

	/*iterate through nodes*/
	while (h->next != NULL)
	{
		/*next node*/
		h = h->next;
		/*count node*/
		node_count++;
	}

	return (node_count);
}
