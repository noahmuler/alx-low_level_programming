#include "main.h"

/**
 * more_numbers - function called
 *
 * Return: 0 or 1
 */
void more_numbers(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
				_putchar(i + '0');
		}
		_putchar('\n');
		j++;
	}
}
