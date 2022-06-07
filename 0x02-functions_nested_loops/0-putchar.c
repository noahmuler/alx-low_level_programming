#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char pr[] = "_putchar\n";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		if (_putchar(pr[i]) == 1)
			continue;
	}
	return (0);
}
