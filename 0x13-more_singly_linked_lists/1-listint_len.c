#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked list
 * @h: linked list
 *
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	if (h == NULL)
		return 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
