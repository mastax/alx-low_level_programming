#include "main.h"
/**
 * clear_bit - changes the value of the bit at a given index to 0
 * @n: pointer to the input number
 * @index: the input index
 * Return: 1 if the function worked correctlym or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index > 63)
		return (-1);
	/* creat a mask to set the bit at the given index to 0 */
	mask = 1 << index;
	/* use 1 is complement to switch da 0 at da index to 1 and all others to 0*/
	mask = ~mask;
	/* perform a bitwise AND between the mask and the input nmbr*/
	*n &= mask;
	return (1);
}
