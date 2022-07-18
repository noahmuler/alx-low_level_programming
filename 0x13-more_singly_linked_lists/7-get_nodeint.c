#include "lists.h"
/**
 * get_nodeint_at_index - Locates a given node using index
 * @head: A pointer to the head node
 * @index: The index of the node to locate
 * Return: NULL or the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
