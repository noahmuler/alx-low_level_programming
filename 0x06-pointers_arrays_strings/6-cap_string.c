#include "main.h"

/**
 * cap_string - Uppercase conversion function
 *
 * @a: destination pointer
 * Return: char
 */
char *cap_string(char *a)
{
	int i = 0, j = 0;
	char delim[] = " \t\n,;.!?\"(){}";

	for (i = 0; a[i] != '\0'; i++)
	{
		if (islower(a[0]))
			a[0] = toupper(a[0]);

		for (j = 0; delim[j] != '\0'; j++)
		{
			if (a[i] == delim[j] && islower(a[i + 1]))
				a[i + 1] = toupper(a[i + 1]);
		}
	}
	return (a);
}
