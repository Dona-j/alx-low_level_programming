#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - print all lowercase character
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;
	char c;

	i = 0;
	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)

		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
