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
	unsigned long fib = 0, fib2 = 1, addfib;
	unsigned long f1_h1, f1_h2, f2_h1, f2_h2;
	unsigned long h1, h2;

	for (n = 0; n < 92; n++)
	{
		addfib = fib + fib2;
		printf("%lu, ", addfib);
		fib = fib2;
		fib2 = addfib;
	}

	f1_h1 = fib / 10000000000;
	f2_h1 = fib2 / 10000000000;
	f1_h2 = fib / 10000000000;
	f2_h2 = fib2 / 10000000000;

	for (n = 93; n < 99; n++)
	{
		h1 = f1_h1 + f2_h1;
		h2 = f1_h2 + f2_h2;
		if (f1_h2 + f2_h2 > 9999999999)
		{
			h1++;
			h2 %= 10000000000;
		}

		printf("%lu%lu", h1, h2);
		if (n != 98)
			printf(", ");

		f1_h1 = f2_h1;
		f1_h2 = f2_h2;
		f2_h1 = h1;
		f2_h2 = h2;
	}
	printf("\n");
	return (0);
}
