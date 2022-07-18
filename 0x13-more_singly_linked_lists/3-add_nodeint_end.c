#include "lists.h"
/**
 * add_nodeint_end - adds new node at the end
 * @head: head node ptr
 * @n: node element
 * Return: new node at end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add, *tail;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if (*head == NULL)
		*head = add;
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = add;
	}
	return (tail);
}
