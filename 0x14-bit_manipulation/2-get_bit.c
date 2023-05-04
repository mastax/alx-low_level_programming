#include "main.h"
/**
 * get_bit - get the bit of a givin index.
 * @n: the input number.
 * @index: the input index (starting from 0)
 *
 * Return: the value of the bit at the specified index (0 or 1), or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 0;
	int digit;

	/* check if index out of range */
	if (index > 63)
	{
		return (-1);
	}
	/* create a mask with a 1 at the specified index to extract the bit value*/
	mask = 1 << index;
	/* use the mask to extract the bit value and shift it to the least position*/
	digit = (n & mask) >> index;
	return (digit);
}
