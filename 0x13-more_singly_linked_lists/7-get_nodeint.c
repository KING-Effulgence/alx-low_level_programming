#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: first node in the linked list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the nth node, or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind = 0;
	listint_t *temp = head;

	while (temp && ind < index)
	{
		temp = temp->next;
		ind++;
	}
	if (temp != NULL)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
