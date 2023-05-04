#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Prints the content of a buffer
 * @b: Pointer to buffer
 * @size: Size of buffer
 *
 * Description: Prints the content of size bytes of the buffer pointed by b.
 * The output should print 10 bytes per line. Each line starts
 * with the position of the first byte of the line in hexadecimal
 * (8 chars), starting with 0. Each line shows the hexadecimal
 * content (2 chars) of the buffer, 2 bytes at a time, separated
 * by a space. Each line shows the content of the buffer. If the
 * byte is a printable character, print the letter, if not, print
 * ".". Each line ends with a new line \n. If size is 0 or less,
 * the output should be a new line only \n.
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		/* Print the starting position of the line in hexadecimal */
		printf("%08x ", i);

		/* Print the hexadecimal content of the buffer, 2 bytes at a time */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x ", (unsigned char)b[i + j]);
			}
			else
			{
				printf("   ");
			}
		}
		printf(" ");
		/* Print the content of the buffer */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char c = b[i + j];

				if (c >= 32 && c <= 126)
				{
					printf("%c", c);
				}
				else
				{
					printf(".");
				}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
