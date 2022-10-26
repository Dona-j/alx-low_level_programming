#include "lists.h"
/**
 * free_listint - function that frees a linked list
 * @head: pointer to first node of linked list
 *
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *supp = current;

		current = current->next;
		free(supp);
	}
	*head = NULL;
}
