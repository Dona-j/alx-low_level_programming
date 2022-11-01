#include "main.h"

/**
 * main - check the code
 * @ac: main argument passed i
 * av: argument ccepted by main
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 30)
	{
		 dprintf(2, "Usage: %s filename text\n", av[0]);
		 exit(1);
	}
	res = create_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}
