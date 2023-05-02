#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Adress of a pointer to the first node of the list.
 * @idx: the index of the list where the new node should be added.
 * @n: value to store in the new node.
 *
 * Return: Address of the new node, or NULL if it failled.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i = 0;

	/* Check if head is NULL */
	if (head == NULL)
		return (NULL);
	/* Allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	/* check if malloc failed */
	if (new_node == NULL)
		return (NULL);
	/* set the value of the new node to n */
	new_node->n = n;
	/* if index is 0, new node becomes the head */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	/* iterate to node before the index */
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	/* if index is out of range */
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* Link new node to next node */
	new_node->next = temp->next;
	/* link previous node to new node */
	temp->next = new_node;
	return (new_node);
}
