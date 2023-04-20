#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums a variable number of integers.
 * @n: the number of integers to be summed.
 * @...: the integers to be summed.
 * Return: the sum of all integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list arguments;

	va_start(arguments, n);
	while (i < n)
	{
		sum += va_arg(arguments, int);
		i++;
	}
	va_end(arguments);
	return sum;
}
