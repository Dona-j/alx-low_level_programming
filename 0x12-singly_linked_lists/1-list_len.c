#include "lists.h"

/**
 * list_len - function that prints number of elements in a linked list
 * @h: address of a linked list
 *
 * Return: len
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
