#include "lists.h"

/**
 * pop_listint - deletes the head  node of a listint_t list
 * @head: address of head
 *
 * Return: data of head node (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *delNode;
	int n;

	if (*head != NULL)
	{
		delNode = *head;
		n = delNode->n;
		*head = (*head)->next;
		free(delNode);
	}
	else
	{
		if (*head == NULL)
		{
			return (0);
		}
	}
	return (n);
}
