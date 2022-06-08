#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_times_table - Entry point
 *
 * @n: int var passed
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int r, col, m;

	if (n <= 15 && n >= 0)
	for (r = 0; r <= n; r++)
	{
		for (col = 0; col <= n; col++)
		{
			m = r * col;
			printf("%d", m);
			if (col != n && ((m + r) < 10))
				printf(",   ");
			else if (col != n && ((m + r) >= 10) && ((m + r) < 100))
				printf(",  ");
			else if (col != n && ((m + r) >= 100))
				printf(", ");
			else
				continue;
		}
		printf("\n");
	}
}
