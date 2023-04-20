#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints all the given numbers.
 * @separator: define character to separate the numbers
 * @n: number of numbers to be printed.
 * Return: a string with numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 1;
	va_list arguments;

	va_start(arguments, n);

	while (i <= n)
	{
		printf("%i", va_arg(arguments, int));
		if (i < n && separator)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(arguments);
}
