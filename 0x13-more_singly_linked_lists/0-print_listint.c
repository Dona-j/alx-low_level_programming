#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to linked list
 *
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	n = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
