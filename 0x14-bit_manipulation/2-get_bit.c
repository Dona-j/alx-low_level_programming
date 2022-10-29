#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: Numbers of searches
 * @index: of the bit to get
 *
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int get_val;

	if (index > 63)
		return (-1);

	get_val = (n >> index) & 1;
	return (bit_val);
}
