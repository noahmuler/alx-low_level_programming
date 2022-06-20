#include "main.h"

/**
 * _memset - fills memory with constant byte
 *
 * @s: character pointer
 * @b: character argument
 * @n: unsigned int argument
 * Return: char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
