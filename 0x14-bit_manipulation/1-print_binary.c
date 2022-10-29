#include "main.h"

/**
 * print_binary - Prints the binary representation of a given integer number
 * @n: An unsigned integer number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int current;
	int count = 0, i;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
