#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns  length of string
 * @s: parameter of string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int lng;

	while (*s != '\0')
	{
		lng += 1;
		*s = *s + 1;
	}
	return (0);
}
