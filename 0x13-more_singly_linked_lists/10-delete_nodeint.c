#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at given index of linked lists
 * @head: pointer to the head of the list.
 * @index: index of the node to be deleted.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	/* Check if head is NULL */
	if (*head == NULL)
		return (-1);
	/* Special case for deleting the first node */
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	current = *head;
	prev = NULL;
	/* traverse the list */
	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}
	/* Check if index is out of bounds */
	if (current == NULL)
	{
		return (-1);
	}
	/* Delete the node */
	prev->next = current->next;
	free(current);
	return (1);
}
