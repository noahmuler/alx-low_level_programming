#include "3-calc.h"
/**
 * main - Entry Point
 * @argc: arg count
 * @argv: arg elements array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*func)(int, int);
	char o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	o = *argv[2];
	if ((o == '/' || o == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(a, b);
	printf("%d\n", result);
	return (0);
}
