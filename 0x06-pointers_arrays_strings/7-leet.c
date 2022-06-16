#include "main.h"

/**
 * leet - 1337 conversion function
 *
 * @a: destination pointer
 * Return: char
 */
char *leet(char *a)
{
	int i, j;
	char chng[] = "ol_ea__t";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; chng[j] != '\0'; j++)
		{
			if (a[i] == chng[j] || a[i] == (chng[j] - 32))
				a[i] = j + '0';
		}
	}
	return (a);
}
