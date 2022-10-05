#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: argument passed into main
 * @argv: argument passed into main
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc == 1)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
