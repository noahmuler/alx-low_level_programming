#include "lists.h"
/**
 * add_nodeint - adds node
 * @head: head pointer
 * @n: node int element arg
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;
	return (add);
}
