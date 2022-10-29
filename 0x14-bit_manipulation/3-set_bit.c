#include "main.h"

/**
 * set_bit - sets the value of a bit to an index
 * @n: pointer parameter
 * @index: Index of the bit to set to 1
 *
 * Return: 1 if corect, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-6);
	*n = ((1UL << index) | *n);
	return (1);
}
