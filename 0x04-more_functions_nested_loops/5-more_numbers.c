#include "main.h"

/**
 * more_numbers - function called
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j = 0;
	char n = '\n';

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
		write(1, &n, 1);
		j++;
	}
}
