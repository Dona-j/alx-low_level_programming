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
	listint_t *head, *temp;

	temp = malloc(sizeof(listint_t));

	temp->n = n;
	temp->next = NULL;

	if (head != NULL)
	{
		while (*head = NULL)
		{
			head->next = temp;
		}
		else
		{
			h->next = next;
		}
		return (*temp);
}
