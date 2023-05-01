#include "lists.h"
/**
 * free_listint2 - Frees the memory allocated to a list of integers.
 * @head: Double pointer to the head of the list.
 * Return: Always succes (Nothing).
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	/* Check if hr˙ead is NULL or the list is empty */
	if (head == NULL || *head == NULL)
	{
		return;
	}
	current = *head;
	/* Loop through the list and free each node */
	for (; current != NULL; current = next)
	{
		next = current->next;
		free(current);
	}
	/* Set the head to NULL to indicate the list is now empty */
	*head = NULL;
}
