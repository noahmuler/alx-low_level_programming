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
	long int fib = 0, fib2 = 1, addfib;
	float total = 0;

	while (1)
	{
		addfib = fib + fib2;
		if (addfib > 4000000)
			break;

		if ((fib % 2) == 0)
			total = total + addfib;
		fib = fib2;
		fib2 = addfib;
	}
	printf("%.0f\n", total);
	return (0);
}
