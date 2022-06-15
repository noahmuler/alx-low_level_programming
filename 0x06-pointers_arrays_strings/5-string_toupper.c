#include "main.h"

/**
 * string_toupper - Uppercase conversion function
 *
 * @a: destination pointer
 * Return: char
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		a[i] = toupper(a[i]);
		i++;
	}
	return (a);
}
