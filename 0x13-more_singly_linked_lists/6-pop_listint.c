#include "lists.h"
/**
 * pop_listint - deletes head node and displays n
 * @head: head node
 * Return: n or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n_return;

	if (*head == NULL)
		return (0);
	tmp = *head;
	n_return = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (n_return);
}
