#include "main.h"

/**
 * create_array - creates array chars, initialize with a specific char
 *
 * @size: unsigned int
 * @c: char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A;

	if (size == 0)
		return (NULL);
	A = (char *)malloc(size * sizeof(char));
	if (A == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}
	return (A);
}
