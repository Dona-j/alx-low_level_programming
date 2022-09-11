#include <stdio.h>

/**
 * main - utput integers
 *
 * Description: output the integers of base ten starting from zero
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
