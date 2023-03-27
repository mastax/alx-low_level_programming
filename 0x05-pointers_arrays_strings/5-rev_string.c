#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: String in inverse
 */
void rev_string(char *s)
{
	char rev;
	int i;
	int count;

	rev = s[0];
	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}
