#include "main.h"
/**
 * set_bit - change to 1 the bit of a given index.
 * @n: pointer to the input number,
 * @index: the input index
 *
 * Return: 1 if seccessful, 0r -1 if an error occurs/
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	/* check if the index is out of range */
	if (index > 63)
		return (-1);
	/* create a mask with a 1 at the specified index */
	/* exemple: index = 3, mask = 0b00001000 */
	mask = 1UL << index;
	/*set da bit value to 1 by performing a bitwise OR between da nmbr & da mask*/
	/* the result is then stored back into da original variable pointed to by n */
	/* Exemple: n = 0b10101110, *n =0b10101110 | 0b00001000 = 0b10101110 */
	*n |= mask;
	return (1);
}
