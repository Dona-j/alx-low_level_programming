#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a programme that multiplies two numbers
 * @argc: main argument
 * @argv: main argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		while (a && b)
		{
			printf("%d\n", a * b);
			break;
		}
	}
	return (0);
}
