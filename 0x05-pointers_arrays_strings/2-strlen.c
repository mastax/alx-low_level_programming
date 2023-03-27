#include "main.h"
/**
 * _strlen - unction that returns the length of a string.
 * @s: string
 * Return: The length.
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
