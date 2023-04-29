#include "lists.h"
/**
 * print_listint - print all the elements of a listint list.
 * @h: pointer to the list header adress
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *temp;

	if (h == NULL)
	{
		return (0);
	}
	temp = h;
	for (i = 0; temp != NULL; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
