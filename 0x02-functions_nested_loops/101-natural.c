#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, sum;

	sum = 0;
	for (n = 1024; n <= 1; n--)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum = sum + n;
		else
			continue;
	}
	printf("%d\n", sum);
	return (0);
}
