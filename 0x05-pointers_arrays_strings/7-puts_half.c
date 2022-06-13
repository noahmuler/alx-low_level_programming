#include "main.h"

/**
 * puts_half - puts half of string passed on stdout
 *
 * @str: arg passed as pointer
 * Return: void
 */
void puts_half(char *str)
{
	unsigned long i;

	if ((strlen(str) % 2) == 0)
		for (i = (strlen(str) / 2); i < strlen(str); i++)
			printf("%c", str[i]);
	else if ((strlen(str) % 2) != 0)
		for (i = ((strlen(str) - 1) / 2); i < strlen(str); i++)
			printf("%c", str[i]);
	printf("\n");
}
