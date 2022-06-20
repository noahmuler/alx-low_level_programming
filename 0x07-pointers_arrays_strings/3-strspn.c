#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: character pointer
 * @accept: character argument
 * Return: char pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
