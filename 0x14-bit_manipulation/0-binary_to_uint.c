#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if there is one or more chars
 * int the string b that is not 0 or 1 or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	/* Check if input string is null */
	if (b == NULL)
		return (0);
	/* Iterate over each char in the string */
	while (*b != '\0')
	{
		/* Check if char is not 0 or 1 */
		if (*b != '0' && *b != '1')
			return (0); /* if not, return 0 (invalide input)*/
		/* shift the current value of n left bu one bit */
		n <<= 1;
		if (*b == '1')
		{
			n += 1;
		}
		b++;
	}
	return (n);
}
