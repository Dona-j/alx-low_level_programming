#include "main.h"
#include <stdio.h>


/**
 * _puts - prints a string followed by a new line.
 *
 * @str: Entry point parameter
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
