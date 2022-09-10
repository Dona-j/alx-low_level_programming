#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to n each time it is executed
 *
 *Description: print the last digit of he number stored in the variable n
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
		{	
		  printf("Last digit of %d is %d and is greater than 5\n", n, l);
		}
	else if (l == 0)
		{
		printf("Last digit of %d is %d and is 0\n", n, l);
		}
	else
		{
		printf("Last digit of %d is %d and is 0\n", n, l);
		}	
	return (0);
}
