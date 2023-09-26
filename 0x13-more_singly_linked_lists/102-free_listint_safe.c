#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to a pointer to the head of the list.
 * Return: The number of nodes that were freed.
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *next_node;
	size_t node_count = 0;

	while (current)
	{
		next_node = current->next;
		free(current);
		node_count++;
		if (current <= next_node)
		{
			*h = NULL;
			break;
		}
		current = next_node;
	}
	*h = NULL;
	return (node_count);
}
