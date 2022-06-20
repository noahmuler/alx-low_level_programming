#include "main.h"

/**
 * _memcpy - coppies then fills memory with constant byte
 *
 * @dest: character destination pointer
 * @src: character source pointer argument
 * @n: unsigned int argument
 * Return: char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
