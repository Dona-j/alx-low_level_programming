#include <stdio.h>

/**
 * main - The last digit
 *
 * Description: printing all the alphabets in lower case
 *
 * Return: Always (0) (Success)
 */

int main(void)

{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)

	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
