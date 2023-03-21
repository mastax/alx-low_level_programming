#include "main.h"
/**
 * _abs - Compute the absolute value of integer.
 * @i: The integer to be computed.
 *
 * Return: Absolute value.
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
