#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: parameter of name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)

		return;

		f(name);

}
