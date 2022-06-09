#include "main.h"

/**
 * _isupper - unction to check uppercase character
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (isupper(c) > 0)
		return (1);
	else if (isupper(c) == 0)
		return (0);
	else
		return(0);
}
