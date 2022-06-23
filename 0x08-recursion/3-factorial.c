#include "main.h"

/**
 * factorial - returns factorial
 *
 * @n: integer argument
 * Return: factorial
 */
int factorial(int n)
{
	if (n >= 1)
		return (n * factorial(n - 1));
	else
		return (1);
}
