#include "lists.h"

/**
 * listint_len - a function returning number of elements a linked lists
 * @h: linked list
 *
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
