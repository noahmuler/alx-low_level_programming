#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: int array
 * @size: int array size
 * @cmp: function ptr
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, (*fptr)(int) = cmp;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (fptr(array[i]))
			return (i);
	}
	return (-1);
}
