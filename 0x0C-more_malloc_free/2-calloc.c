#include "main.h"
/**
 * _calloc - allocates memory using calloc
 * @nmemb: uns int
 * @size: uns int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = (char *) calloc(nmemb, size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}
