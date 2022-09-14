#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10times in lowercase
 *
 * Description:  using @charc and @i as parameters in nested while loop
 *
 * Return: Always (0) (Success)
 */

void print_alphabet_x10(void)
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
