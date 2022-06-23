#include "main.h"
#include <math.h>

/**
 * _pow_recursion - returns x raised to y
 *
 * @x: integer argument
 * @y: integer argument
 * Return: factorial
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
