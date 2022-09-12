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

	while (i <= 99)
	{
		n = 0; 
		while (n <= 99)
		{
			if (n != i)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar (' ');
				putchar((n / 10) + 48);
				putchar ((n % 10) + 48);

				if (i != 98 || n != 98)
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
