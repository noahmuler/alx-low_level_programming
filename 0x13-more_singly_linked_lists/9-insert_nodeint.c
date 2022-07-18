#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at index
 * @head: head node ptr
 * @idx: index number
 * @n: node element
 * Return: new node address or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *add, *copy = *head;
	unsigned int node;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	if (idx == 0)
	{
		add->next = copy;
		*head = add;
		return (add);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);
		copy = copy->next;
	}
	add->next = copy->next;
	copy->next = add;
	return (add);
}
