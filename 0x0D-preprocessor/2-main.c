#include <stdlib.h>
#include <stdio.h>

/**
 * main - a programme that prints the name of the file
 *
 * Return: Always 0
 */

int main(void)
{
	char *s;

	s = __FILE__;
	printf("%s\n", s);
	return (0);
}
