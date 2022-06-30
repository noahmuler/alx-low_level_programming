#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: void ptr
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *rc;
	unsigned int i;

	if (ptr != NULL)
		clone = ptr;
	else
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	rc = malloc(new_size);
	if (rc == NULL)
	{
		free(rc);
		return (0);
	}
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(rc + i) = clone[i];
	}
	free(ptr);
	return (rc);
}
