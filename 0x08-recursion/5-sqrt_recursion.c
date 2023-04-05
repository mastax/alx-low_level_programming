#include "main.h"
int square_root(int n, int low, int high);
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 * Return: The natural square root of n, or -1 if n does not have a
 * natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root(n, 0, n));
}
/**
 * square_root - Helper function for _sqrt_recursion.
 *
 * @n: The number to calculate the square root of.
 * @low: The lowest possible square root of n.
 * @high: The highest possible square root of n.
 * Return: The natural square root of n, or -1 if n does not have a
 * natural square root.
 */
int square_root(int n, int low, int high)
{
	int mid = (low + high) / 2;

	if (low > high)
	{
		return (-1);
	}
	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (square_root(n, low, mid - 1));
	}
	else
	{
		return (square_root(n, mid + 1, high));
	}
}
