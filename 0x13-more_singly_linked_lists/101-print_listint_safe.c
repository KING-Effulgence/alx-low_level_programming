#include "lists.h"

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped linked list
 * @head: pointer to the head of the linked list to check
 *
 * Return: 0 if the list is not looped
 * else - the number of unique nodes on the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *red, *yellow;
	size_t num_nodes = 1;

	if (!head || !(head->next))
		return (0);

	red = head->next;
	yellow = (head->next)->next;

	while (yellow)
	{
		if (red == yellow)
		{
			red = head;
			while (red != yellow)
			{
				num_nodes++;
				red = red->next;
				yellow = yellow->next;
			}
			red = red->next;
			while (red != yellow)
			{
				num_nodes++;
				red = red->next;
			}

			return (num_nodes);
		}

		red = red->next;
		yellow = (yellow->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints the safe version of a linked list.
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;

	num_nodes = looped_listint_len(head);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		head = head->next;
		num_nodes++;
	}
	if (num_nodes > 0)
		printf("-> [%p] %d\n", (void *)head, head->n);
	return (num_nodes);
}
