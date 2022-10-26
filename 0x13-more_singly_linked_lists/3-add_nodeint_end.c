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
	listint_t *firstNode, *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));

	firstNode = *head;

	temp->n = n;
	temp->next = NULL;

	while (firstNode != NULL)
	{
		firstNode = firstNode->next;
	}
	firstNode->next = temp;
	return (firstNode);
}
