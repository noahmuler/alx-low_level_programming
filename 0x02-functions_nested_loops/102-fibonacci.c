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
	int n;
	unsigned long int fib = 0, fib2 = 1, sum;

	for (n = 1; n <= 50; n++)
	{
		sum = fib + fib2;
		printf("%lu", sum);

		fib = fib2;
		fib2 = sum;

		if (n == 50)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
