#include <stdio.h>
#include "main.h"
/**
 * main - prints all the args it receives
 * @argc: number of args.
 * @argv: array of args.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
