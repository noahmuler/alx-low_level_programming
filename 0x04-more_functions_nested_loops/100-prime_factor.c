#include <stdio.h>
#include <math.h>

/**
 * main - function main for entry
 *
 * Return: 0
 */

int main(void)
{
	int i, max = -1;
	unsigned long n = 612852475143;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%d\n", max);
	return (0);
}
