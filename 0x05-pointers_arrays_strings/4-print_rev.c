#include "main.h"
/**
 * print_rev - function that prints a string, in reverse.
 * @s: string.
 * Return: 0
 */
void print_rev(char *s)
{
	int len;
	int o;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (o = len; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
