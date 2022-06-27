#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: char pointer Destination
 * @s2: char pointer Source
 * Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *S, *tmp;
	unsigned int size;

	if (!s1)
		s1 = "";
	else if (!s2)
		s2 = "";
	size = strlen(s1) + strlen(s2) + 1;
	S = (char *) malloc(size * sizeof(char));
	if (S == NULL)
		return (NULL);
	tmp = S;
	while (*s1)
		*tmp++ = *s1++;
	while ((*tmp++ = *s2++))
		;
	return (S);
}
