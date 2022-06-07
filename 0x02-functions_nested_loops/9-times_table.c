#include "main.h"
#include <stdlib.h>
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int r, col, m;

	for (r = 0; r <= 9; r++)
	{
		for (col = 0; col <= 9; col++)
		{
			m = r * col;
			if (m >= 10)
			{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			}
			else
			{
				_putchar(m + '0');
			}
			if (col != 9 && (m + r) >= 10)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
