#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to a pointer to the head of the list.
 * Return: The number of nodes freed.
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t count = 0;

	while (current != NULL)
	{
		listint_t *next_node = current->next;

		free(current);
		count++;
		current = next_node;

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}
	return (count);
}
