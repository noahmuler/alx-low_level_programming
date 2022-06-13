#include "main.h"

/**
 * puts2 - puts a char on stdout
 *
 * @str: arg passed as pointer
 * Return: void
 */
void puts2(char *str)
{
	unsigned long i;

	for (i = 0; i < strlen(str); i++)
		if (i % 2 == 0)
			printf("%c", str[i]);
	printf("\n");
}
