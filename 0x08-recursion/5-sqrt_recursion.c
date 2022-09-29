#include "main.h"

/**
 * _sqrt_recursion - function that returns square root of a number
 * @n: parameter for natural square root
 *
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (real_root(n, 0));
}


/**
 * real_root - find the natural square root of a number
 * @n: input parameter
 * @i: counter parameter
 *
 * Return: sqrt
 */
int real_root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_root(n, i + 1));
}
