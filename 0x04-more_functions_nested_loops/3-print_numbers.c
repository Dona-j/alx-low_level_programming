#include <unistd.h>
#include <stdio.h>
#include "main.h"
i#include "_putchar.h"
/**
 * print_numbers- prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: void
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
