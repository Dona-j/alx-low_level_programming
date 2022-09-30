#include "main.h"

/**
 * is_prime_number -  function that returns 1 if prime number else 0
 * @n: number parameter
 * @i: number parameter
 * Return: 1 if prime number and 0 if not
 */
int actual_prime_number(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == 1)
			return (1);
		else
			return (0);
	}
	return (0 + actual_prime_number(n, i - 1));
}


/**
 * is_prime_number - calculates if a number is prime or not
 * @n: number parameter
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}

	if (n < 0)
	{
		return (0);
	}

	else if (n == 0)
	{
		return (0);
	}
	return (is_prime_number('n', 2));
}
