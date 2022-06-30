#include "main.h"
/**
 * _pow - power math function
 * @base: int
 * @exp: int
 * Return: int
 */
int _pow(int base, int exp)
{
	int result;

	if (exp < 0)
		return (-1);
	result = 1;
	while (exp)
	{
		if (exp & 1)
			result *= base;
	exp >>= 1;
	base *= base;
	}
	return (result);
}
/**
 * convert - long binary to int
 * @n: unsinged long
 * Return: int
 */
long int convert(long int n)
{
	int dec = 0, rem;
	double i = 0;

	while (n != 0)
	{
	rem = n % 10;
	n /= 10;
	dec += rem * _pow(2, i);
	++i;
	}
	return (dec);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments array in char
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j, binary[32];
	long int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	a = convert(atol(argv[1]));
	b = convert(atol(argv[2]));
	mul = a * b;
	for (i = 0; mul > 0; )
	{
		binary[i++] = mul % 2;
		mul /= 2;
	}
	for (j = i - 1; j >= 0; j--)
		printf("%d", binary[j]);
	printf("\n");
	return (0);
}
