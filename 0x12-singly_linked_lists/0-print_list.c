#include "lists.h"

/**
 * print_list - a function that prints all the elements of a linked list
 * @h: address of a linked list
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *list = h;

	 i = 0;
	if (list == NULL)
	{
		return (0);
	}
	while (list != NULL)
	{
		if (list->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", list->len, list->str);
		}
		list = list->next;
		i++;
	}
	return (i);
}
