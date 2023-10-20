#include "lists.h"

/**
 * add_node - adds a new node to the beginnig of a list
 * @head: pointer to the first node
 * @str: new node to be added
 *
 * Return: the address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t ch = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	for (ch = 0; str[ch]; ch++)
		;

	new->str = strdup(str);
	new->len = ch;
	new->next = *head;
	*head = new;

	return (*head);
}
