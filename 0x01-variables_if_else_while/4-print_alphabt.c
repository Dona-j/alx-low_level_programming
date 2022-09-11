#include <stdio.h>

/**
 * main - lowercase and newline
 *
 * Description: printing all the alphabets in lower case except q and e
 *
 * Return: Always (0) (Success)
 */

int main(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
		if (alphabet == 'q')
			continue;

		else if (alphabet == 'e')
			continue;

		putchar (alphabet);
	}
	putchar ('\n');

	return (0);
}
