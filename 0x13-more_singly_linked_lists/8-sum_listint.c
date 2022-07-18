#include "lists.h"
/**
 * sum_listint - sum of n of all nodes
 * @head: head node ptr
 * Return: int sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
