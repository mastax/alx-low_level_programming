#include "lists.h"
/**
 * listint_len - shows the number of node of a listint_t list.
 * @h: pointer to the header adress.
 * Return: number of nudes.
 */
size_t listint_len(const listint_t *h)
{
	unsigned long int i;
	const listint_t *temp = h;

	for (i = 0; temp != NULL; i++)
	{
		temp = temp->next;
	}
	return (i);
}
