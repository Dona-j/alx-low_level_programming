#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower- Entry poinit
 *
 * @c: integer parameter
 *
 * Description: check lowercase character using parameter @c as the alphabet
 *
 * Return: Always (1) or (0) (Success)
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
