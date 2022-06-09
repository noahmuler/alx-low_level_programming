#include "main.h"

/**
 * _isdigit - unction to check uppercase character
 *
 * @c: int var passed
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (isdigit(c) > 0)
		return (1);
	else if (isdigit(c) == 0)
		return (0);
	else
		return (0);
}
