#include "main.h"
/**
 * get_endianness - Checks the endianness of the system,
 * Return: 0 if big_endianm 1 if little-endian.
 */
int get_endianness(void)
{
	int i = 1;

	/* if MSB is 1, the machin is gig-endian */
	if ((i >> 31) == 1)
		return (0);
	/* otherwise, the machine is little-endian */
	else
		return (1);
}
