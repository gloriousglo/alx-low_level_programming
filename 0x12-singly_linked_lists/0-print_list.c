#include "lists.h"

/**
 * print_list - function to print all elements of a list
 * @h: the list to be printed
 * Return: return the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nelement = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		nelement++;
	}
	return (nelement);
}
