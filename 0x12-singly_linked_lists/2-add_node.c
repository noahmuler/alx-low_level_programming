#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of list_t.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str_c;
	int len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str_c = strdup(str);
	if (str_c == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new_node->str = str_c;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
