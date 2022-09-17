#include <unistd.h>
#include <stdio.h>

/**
* mul -  a function that multiplies two integers.
* @a: first input
* @b: second input
*
* Return: result of multiplication of the 2 inputs
*/
int mul(int a, int b)
{
	int ret_val;

	ret_val = a * b;
	return (ret_val);
}
