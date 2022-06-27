#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: char pointer
 * Return: char pointer
 */
char *_strdup(char *str)
{
	char *A;
	unsigned int size = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + size))
		size++;
	size++;
	A = (char *) malloc(size * sizeof(char));
	if (A == NULL)
		return (NULL);
	A = strdup(str);
	return (A);
}
