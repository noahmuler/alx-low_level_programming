#include "main.h"

/**
 * print_number - function called
 *
 * @n: int arg passed
 * Return: 0 or 1
 */
void print_number(int n)
{
	if (n >= 10 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 1000)
	{
		_putchar(n / 1000 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0 && n >= -9)
	{
		_putchar('-');
		n = -1 * n;
		_putchar(n + '0');
	}
	else if (n < -9 && n >= -99)
	{
		_putchar('-');
		n = -1 * n;
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
		_putchar(n + '0');
}
