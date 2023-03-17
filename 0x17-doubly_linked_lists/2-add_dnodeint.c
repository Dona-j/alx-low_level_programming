#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: pointer to head of linked list
 * @n: linked list data
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->next = *head;
	new_node->n = n;

	if ((*head) != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
