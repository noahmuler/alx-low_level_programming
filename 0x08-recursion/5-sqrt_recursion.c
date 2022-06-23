#include "main.h"
#include <math.h>
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - returns x raised to y
 *
 * @n: integer argument
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursion for square root
 * @n: int parameter
 * @i: int parameter
 * Return: int
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	else if ((i * i) > n)
		return (-1);
	else if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}
