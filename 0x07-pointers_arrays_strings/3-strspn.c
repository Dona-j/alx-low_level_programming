#include"main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the source string
 * @accept: the string accepted
 *
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accepted[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accepted[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}
	return (t);
}
