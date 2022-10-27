#include "lists.h"

/**
 * pop_listint - deletes the head  node of a listint_t list
 * @head: address of head
 *
 * Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *delNode;
	int n;

	if (head != NULL)
	{
		delNode = *head;
		n = delNode->n;
		*head = (*head)->next;
		free(delNode);
	}
	else
	{
		return (0);
	}
	return (n);
}
