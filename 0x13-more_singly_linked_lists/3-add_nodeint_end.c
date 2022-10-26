#include "lists.h"

/**
 * add_nodeint_end - function adds new node to end of linked list
 * @n: node data parameter
 * @head: pointer to first element of linked list
 *
 * Return: NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node;
	}
	return (temp);
}
