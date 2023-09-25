#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node on the linked list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current = *h;
	listint_t *temp;

	while (current)
	{

		if (current <= current->next)
		{
			temp = current->next;
			*h = NULL;
			current->next = NULL;
			current = temp;

		}
		else
		{
			temp = current->next;
			free(current);
			current = temp;
		}
		len++;
	}

	return (len);
}
