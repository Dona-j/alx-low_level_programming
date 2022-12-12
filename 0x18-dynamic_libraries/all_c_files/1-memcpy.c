#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: detination memory area
 * @src: source memory area
 * @n: bytes tocopy from memory area
 *
 * Return: memory area replaced
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
