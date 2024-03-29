#include "lists.h"

/**
 * dlistint_len - function that returns no. of elements in a linked list.
 * @h: pointer to head of linked list
 *
 * Return:  the number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
