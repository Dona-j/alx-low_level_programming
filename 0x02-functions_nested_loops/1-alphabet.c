#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - print all lowercase character
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
