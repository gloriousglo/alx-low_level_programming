#include "lists.h"

/**
 * list_len - return the number elements in a linked list
 * @h: the linked list
 * Return: return the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nelement = 0;

	while (h != NULL)
	{
		h = h->next;
		nelement++;
	}

	return (nelement);
}
