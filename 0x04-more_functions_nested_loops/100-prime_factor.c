#include <stdio.h>
#include <math.h>

/**
 * main - func main
 *
 * getMaxPrimeFactor - max factor finding function
 *
 * @n: int arg
 * Return: 0
 */

int getMaxPrimeFactor(unsigned long n)
{
	int i, max = -1;

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
	return (max);
}
int main(void)
{
	printf("%d\n", getMaxPrimeFactor(612852475143));
	return (0);
}
