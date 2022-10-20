#include "lists.h"

/**
 * list_len - function that prints number of elements in a linked list
 * h: address of a linked list
 *
 * Return: len
 */
size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *list = h;
	i = 0;	
	if (list->len == 0)
	{
		printf("error\n");
	}
	else
	{
		printf("[%u]\n", list->len);
	}
	i++; 
	return (list->len);
}


