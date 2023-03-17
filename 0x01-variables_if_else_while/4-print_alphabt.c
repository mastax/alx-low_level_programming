#include <stdio.h>

/**
 * main - Print the alphabet in lowercase, expect for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
			putchar(l);
	}
	putchar('\n');

	return (0);
}
