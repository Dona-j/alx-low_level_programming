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
	int i = 0;
	int n;

	while (i <= 9)
	{
		n = 0;
		while (n <= 9)
		{
			if (i != n && i < n)
			{
				putchar(i + 48);
				putchar(n + 48);

			if (i + n != 17)
			{
				putchar(',');
				putchar(' ');
			}
			}
			n++;
		}
		i++;
	}

	putchar('\n');
	return (0);

}
