#include <stdio.h>
#include <stdlib.h>
/**
 * main - generates opcodes.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: the opcodes
 */
int main(int argc, char **argv)
{
	int i = 0, number;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < number)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i == (number - 1))
			printf("\n");
		else
			printf(" ");
		i++;
	}
	return (0);
}
