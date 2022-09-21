#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * str: Entry point parameter
 * @s: Entry point
 *
 * Return 0 Always.
 */


void print_rev(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)

	for (--n; n >= 0; --n)
		_putchar(s[n]);

	_putchar('\n');



}
