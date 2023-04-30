#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: pointer to the head of the list.
 * @n: value to be stored in the new node.
 * Return: pointer to the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last = *head;
	/* Check if the input head pointer is NULL */
	if (head == NULL)
	{
		return (NULL);
	}
	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/* Fill in the data for the new node */
	new_node->n = n;
	new_node->next = NULL;
	/* if the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* if the list is not empty, find the last node and connect to the nee_node */
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
