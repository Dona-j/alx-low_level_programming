#include "lists.h"

/**
 * add_nodeint - function that adds new node at begining of linked lists
 * @head: first node in the linked list
 * @n: node count
 *
 * Return: firstNode.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *firstNode;

	firstNode = malloc(sizeof(head));
	if (firstNode == NULL)
	{
		return (NULL);
	}
	else
	{
		firstNode->n = n;
		firstNode->next = *head;
		*head = firstNode;
	}

	return (firstNode);
}
