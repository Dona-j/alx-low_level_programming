#include "main.h"

/**
 * _strlen - function that returns  length of string
 * @s: parameter of string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int lng;

	for (lng = 0; *s != '\0'; ++s)

		lng++;

	return (lng);
}
