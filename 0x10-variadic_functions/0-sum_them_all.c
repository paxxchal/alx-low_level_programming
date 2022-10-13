#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * return: sum of all its parameters;
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int sum;

	if (n == 0)
	{
		return(0);
	}

	va_start(ap, n);
	for (i = 0; i >= 0; i = va_arg(ap, unsigned int))
	{
		sum = n + i;
	}
	va_end(ap);
	return(sum);
}