#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print in binary form.
 */
void print_binary(unsigned long int n)
{
	/* initialize a mask to the most significant bit of an int type */
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	/* flag variable to check if we're already printedat the least one 1 bit */
	int flag = 0;

	while (mask > 0)
	{
		/* check if the corresponding bit in the input number is a 1 */
		if ((n & mask) == mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1 || mask == 1)
		{
			_putchar('0');
		}
		/* shift the mask to the right by one bit */
		mask >>= 1;
	}
}
