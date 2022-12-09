#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: source string
 * @c: characters to be found
 *
 * Return: string from found characters
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == a[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0')
}
