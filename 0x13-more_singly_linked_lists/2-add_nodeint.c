#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a linked list,
 * @head: pointer to the head of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: Pointer to the new node, or Null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Check if the head pointer is NULL */
	if (head == NULL)
		return (NULL);
	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/* fill the new node with the data */
	new_node->n = n;
	new_node->next = *head;
	/* Update the head pointer to point to the new node */
	*head = new_node;
	/* Return a pointer to the new node */
	return (new_node);
}
