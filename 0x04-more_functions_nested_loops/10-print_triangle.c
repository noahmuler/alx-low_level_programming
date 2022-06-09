#include "main.h"

/**
 * print_triangle - function called
 *
 * @size: int num arg
 * Return: 0 or 1
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = (size - 1); j > i; j--)
				_putchar(' ');
			for (k = 0; k < i; k++)
				_putchar('#');
			_putchar('#');
			_putchar('\n');
		}
	}
}
