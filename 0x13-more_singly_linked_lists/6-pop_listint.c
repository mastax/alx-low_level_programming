#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t.
 * @head: Pointer to head in function.
 * Return: node data
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int data;
	/* Ask if the head was not input */
	if (head == NULL)
	{
		return (0);
	}
	if (*head == NULL)
	{
		return (0);
	}
	/* Store the data of the head node to be returned */
	data = (*head)->n;
	/* Update the head to the next node */
	new_head = (*head)->next;
	/* Frees the memory of the head node */
	free(*head);
	/* Set the new head */
	*head = new_head;
	/* Return the data of the original head node */
	return (data);
}
