#include "main.h"

/**
 * reverse_array - concatination function
 *
 * @a: destination pointer
 * @n: limit of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	if (n % 2 == 0)
		for (i = 0; i < (n / 2); i++)
		{
			tmp = a[i];
			a[i] = a[(n - 1) - i];
			a[(n - 1) - i] = tmp;
		}
	else
		for (i = 0; i < ((n - 1) / 2); i++)
		{
			tmp = a[i];
			a[i] = a[(n - 1) - i];
			a[(n - 1) - i] = tmp;
		}
}
