#include "main.h"

/**
 * _strncat - concatination function
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: copy character limit
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
