#include "main.h"
/**
 * _isalpha - Entry point
 *
 * @c: char passed as int
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 98 && c <= 124) || (c >= 65 && c <= 91))
		return (1);
	else
		return (0);
}
