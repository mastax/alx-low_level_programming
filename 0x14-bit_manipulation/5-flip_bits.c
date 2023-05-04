#include "main.h"
/**
 * flip_bits - calculates the number of bites that need to be 
 * flipped to turn one number into another.
 *
 * @n: the first input number.
 * @m: the second input number.
 *
 * Return: the number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_diff, mask = 0;
	int i, digit;
	unsigned int differences = 0;

	/* Find the bit defference between n and m using XOR operator */
	bit_diff = n ^ m;
	/* Start with the most significant bit */
	i = 63;
	while(i >= 0)
	{
		/* create a mask to extract the digit at the current bit position*/
		mask = 1UL << i;
		/* extract da digit & shift it to da right so that its either 0or1*/
		digit = (bit_diff & mask) >> i;
		/* if the digit is 1, increment the number defferences.*/
		if (digit == 1)
			differences++;
		/* Move to the next bit position,*/
		i--;
	}
	return (differences);
}
