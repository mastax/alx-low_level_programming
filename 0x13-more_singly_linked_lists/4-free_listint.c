#include "lists.h"
/**
 * free_listint - free memory of all list (linked lists).
 * @head: pointer to head in function.
 *
 * Return: Always success (void).
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	/* Travers the linked list, freeing each node */
	for (; head != NULL; head = temp)
	{
		temp = head->next;
		free(head);
	}
}
