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
	_putchar((abs(n) % 10) + '0');
	return (abs(n) % 10);
}
