#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: char ptr
 * @s2: char ptr
 * @n: unsigned int
 * Return: char ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int l1;

	if (!s1)
		s1 = "";
	l1 = strlen(s1);
	if (!s2)
		s2 = "";
	ptr = (char *) malloc(l1 + n + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);
}
