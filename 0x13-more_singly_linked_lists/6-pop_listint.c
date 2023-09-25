#include "lists.h"

/**
 * pop_listint - deletes the head node of alinked list
 * @head: pointer to the first node in the linked list
 *
 * Return: the data inside the node that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nod;

	if (!head || !*head)
		return (0);

	nod = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (nod);
}
