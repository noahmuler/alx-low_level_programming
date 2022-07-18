#include "lists.h"
/**
 * reverse_listint - reverses a node list
 * @head: head node ptr
 * Return: head of new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *start, *end;

	if (head == NULL || *head == NULL)
		return (NULL);
	end = NULL;
	while ((*head)->next != NULL)
	{
		start = (*head)->next;
		(*head)->next = end;
		end = *head;
		*head = start;
	}
	(*head)->next = end;
	return (*head);
}
