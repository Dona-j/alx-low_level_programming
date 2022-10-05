#include "main.h"
#include <stdio.h>

/**
 * main - a programe that prints all arguments it receives
 * @argc: argument of main
 * @argv: argument of main
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
