#include "main.h"
/**
 * char *_strcpy - unction that copies the string pointed to by src
 * @dest: copy to.
 * @src: copy from.
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
