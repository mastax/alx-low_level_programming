#include<stdio.h>
#include<stdlib.h>
#include"function_pointers.h"
/**
 * int_index - returns the index of an array if the function matches.
 * @array: pointer to the array of numbers.
 * @size: size of array.
 * @cmp: pointer to comparation function
 * Return: the index of array.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	while (i < size)
	{
		if (cmp(*(array + i)) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
