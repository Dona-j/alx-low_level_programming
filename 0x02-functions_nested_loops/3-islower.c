#include <unistd.h>
#include "main.h"
#include <ctype.h>

/**
 * int _islower(int c) - function that checks for lowercase character.
 *
 * Description: using @islower from standard library
 *
 * Return: Always (1) or (0) (Success)
 */

int _islower(int c)
{

	if (c >= 'a' && c <- 'z') || (c >= 'A' && C <= 'Z')
	{	
		return (1);
	}
	else
	{
		return (0);
	}
}
