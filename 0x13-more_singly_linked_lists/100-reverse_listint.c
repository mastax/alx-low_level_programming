#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: pointer to the first node ofthe list.
 *
 * Return: Poiter to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	/* Traverse the list */
	while (*head != NULL)
	{
		/* Save the next node in the list */
		next = (*head)->next;
		/* Reverse the link direction */
		(*head)->next = prev;
		/* Move prev pointer one node ahead */
		prev = *head;
		/* move head pointer one node ahead */
		*head = next;
	}
	/* Update the head of the list */
	*head = prev;
	return (*head);
}
