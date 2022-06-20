#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: character pointer
 * @accept: character argument
 * Return: char pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *ret = strpbrk(s, accept);

	return (ret);
}
