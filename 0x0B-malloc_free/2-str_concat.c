#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: char pointer Destination
 * @s2: char pointer Source
 * Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *S;
	unsigned int size;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	else if (s1 == NULL && s2 == NULL)
		return (NULL);
	size = strlen(s1) + strlen(s2);
	S = (char *) malloc(size * sizeof(char));
	if (S == NULL)
		return (NULL);
	S = strdup(s1);
	strcat(S, s2);
	return (S);
}
