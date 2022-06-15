#include "main.h"

/**
 * _strncpy - concatination function
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: copy character limit
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
