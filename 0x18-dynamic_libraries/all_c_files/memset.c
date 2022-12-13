#include "main.h"

/**
 * _memset - fills the first n bytes of the memory with the constant byte b
 * @s: area of memory being filled
 * @b: constant byte to be filled
 * @n: byte of the area of memory to be filled
 *
 * Return: filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
