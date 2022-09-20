#include "main.h"

/**
 * _strlen - function that returns  length of string
 * @s: parameter of string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int lng;

	lng = 0;
	while (*s != '\0')
	{
		lng++;
	}
	return (lng);
}
