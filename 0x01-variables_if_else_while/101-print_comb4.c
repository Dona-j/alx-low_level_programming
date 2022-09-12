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
	int m;

	while (i <= 9)
	{
		n = 0;
		while (n <= 9)
		{
			m = 0;
			while (m <= 9)
			{
				if (i != n && i < n && n != m && n < m)
				{
					putchar(i + 48);
					putchar(n + 48);
					putchar(m + 48);

					if (i + n + m != 27)
					{
						putchar(',');
						putchar(' ');

					}
				}
				m++;
			}
			n++;
		}
		i++;
	}

	putchar('\n');
	return (0);
}

