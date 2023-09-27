#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *second = head;

	while (second && second->next)
	{
		first = first->next;
		second = second->next->next;
		if (first == second)
			break;
	}


	if (second == NULL || second->next == NULL)
		return (NULL);


	first = head;
	while (first != second)
	{
		first = first->next;
		second = second->next;
	}

	return (first);
}
