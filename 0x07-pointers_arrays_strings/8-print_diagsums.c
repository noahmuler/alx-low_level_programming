#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 *
 * @a: int pointer argument
 * @size: int argument
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = i; j < size; j++)
		{
			if (i == j)
				s1 = s1 + *(a + (size * i + i));
		}
	}
	for (i = size - 1; i >= 0; i--)
	{
		for (j = i; j >= 0; j--)
		{
			if (i == j)
				s2 = s2 + *(a + (size * i + size - 1 - i));
		}
	}
	printf("%d, %d\n", s1, s2);
}
