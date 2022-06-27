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
	unsigned int size, l1, l2;

	if (!s1)
		s1 = "";
	else
		l1 = strlen(s1);

	if (!s2)
		s2 = "";
	else
		l2 = strlen(s2);

	size = l1 + l2 + 1;
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
