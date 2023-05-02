#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		head = head->next;
	}
	return (count);
}
/**
 * print_listint_twice - prints a list_int linked list twice.
 * @head: pointer to the head of the list.
 */
void print_listint_twice(const listint_t *head)
{
	size_t count;

	printf("First print :\n");
	count = print_listint_safe(head);
	printf("Number of nodes in the list: %lu\n", count);
	/* print the list and the number of nodes the second time */
	printf("\n Second print:\n");
	count = print_listint_safe(head);
	printf("Number of nodes in the list: %lu\n", count);
}
