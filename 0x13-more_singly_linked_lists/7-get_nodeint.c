#include "lists.h"
/**
 * get_nodeint_at_index - returns the node of a list at given index.
 * @head: Pointer to head in function.
 * @index: Index of the node to return.
 *
 * Return: Node of the given index or NULL if it doesnt exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0, nodes;
	listint_t *temp = head;

	/* Check if head exists */
	if (head == NULL)
	{
		return (NULL);
	}
	/* Count the number of nodes */
	for (nodes = 0; temp != NULL; nodes++)
	{
		temp = temp->next;
	}
	/* Check if the given index is greater then the number of nodes */
	if (index > nodes)
		return (NULL);
	temp = head;
	while (counter <= index)
	{
		if (counter == index)
			return (temp);
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
