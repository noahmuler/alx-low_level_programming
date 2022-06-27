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
	unsigned int i, size = 0;

	if (str == NULL)
		return (NULL);
	size = strlen(str) + 1;
	A = (char *) malloc(size * sizeof(char));
	if (A == NULL)
		return (NULL);
	/*A = strdup(str);*/
	for (i = 0; i <= size; i++)
	{
		A[i] = str[i];
	}
	return (A);
}
