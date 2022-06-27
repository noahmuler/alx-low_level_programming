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
	unsigned int size;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	A = (char *) malloc(size * sizeof(char));
	if (A == NULL)
		return (NULL);
	A = strdup(str);
	return (A);
}
