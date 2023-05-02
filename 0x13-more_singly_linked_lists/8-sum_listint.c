#include "lists.h"
/**
 * sum_listint - returns the sum of all nodes.
 * @head: pointer to head in function.
 * Return: the sum result.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	/* Check if there is no input */
	if (head == NULL)
		return (0);
	/* loop through all nodes */
	for (; temp != NULL; temp = temp->next)
	{
		/* add the value of the current node to the sum */
		sum = sum + temp->n;
	}
	return (sum);
}
