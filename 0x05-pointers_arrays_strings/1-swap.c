#include "main.h"

/**
 * swap_int - a function that swaps value of two integers
 * @a: Entry point
 * @b: Entry point
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
