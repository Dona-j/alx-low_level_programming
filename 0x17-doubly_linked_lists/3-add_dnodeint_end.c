#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @head: pointer to head of linked list
 * @n: linked list data
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp = *head;


	new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->next = NULL;
	/*If list is empty, make new_node the head node*/
	if (!new_node)
		return (NULL);

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;

		return (new_node);

	}

	/*if list not empty, traverse to end of list and make temp the last node*/
	while (temp->next  != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = NULL;

	return  (new_node);

}
