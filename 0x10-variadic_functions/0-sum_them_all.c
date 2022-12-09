#include "variadic_functions.h"
/**
 * @sum_them_all - function that returns sum of llits parameters
 * @n: count parameter
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list sum;
	if (n == 0)
	{
		return (0);
	}
	va_start(n, ...);
	 int i;

	 for (i = 0, i < n, i++);
	 {
		 va_arg(sum, int);
		 i += va_arg(sum, int);
	 }
	 va_end(sum);
	 return (i);
}
