#include "main.h"
/**
 * _islower - Entry point
 *
 * @c: char passed as int
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 98 && c <= 124)
		return (1);
	else
		return (0);
}
