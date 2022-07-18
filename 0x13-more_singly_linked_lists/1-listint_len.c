#include "lists.h"
/**
 * listint_len - returns node count
 * @h: head pointer
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
