#include "lists.h"

/*
 * add_dnodeint_end - adds a new node to the end of the dlistint_t
 * @head: pointer to head of linked list
 * @n: linked list data
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *buffer = *head;

	new_node = malloc(sizeof(dlistint_t));

	/* new_node is the node to be added*/
	 /* if it is null, that is empty, return null*/

	if (!new_node)
		return (NULL);
	/* if the address of the head(first node) is not empty, make it the new node*/
	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}
	while (buffer->next)
	{
		buffer = buffer->next;
	}
	buffer->next = new_node;
	new_node->prev = buffer;
	new_node->next = NULL;
	new_node->n = n;

	return (new_node);
}
