#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Entry point
 *
 * @n: passed as int
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int ld = abs(n % 10);

	_putchar(ld + '0');
	return (ld);
}
