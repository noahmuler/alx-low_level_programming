#include "main.h"

/**
 * swap_int - sets value to 98
 *
 * @a: arg passed as pointer
 * @b: arg passed as pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
