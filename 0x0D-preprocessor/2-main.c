#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char *s;

	s = __FILE__;
	printf("%s\n", s);
	return (0);
}
