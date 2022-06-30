#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: int arg
 * @max: int arg
 * Return: int ptr
 */
int *array_range(int min, int max)
{
	int *Ar;
	int i = 0, t = min;

	if (min > max)
		return (0);
	Ar = malloc((max - min + 1) * sizeof(int));
	if (!Ar)
		return (0);
	while (i <= max - min)
		Ar[i++] = t++;
	return (Ar);
}
