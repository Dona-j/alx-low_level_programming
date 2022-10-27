#include "lists.h"

/**
 * get_nodeint_at_index - Get node at index
 * @head: address of head
 * @index: the index of the node, starting at 0
 *
 * Return: nth node of a listint_t linked list, if node not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *current = head;

	n = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	while (current->next != NULL)
	{
		if (n == index)
		{
			return (current = current->n);
			n++;
		}
	}

	return (NULL);
}
