#include "3-calc.h"
/**
 * main - Entry Point
 * @argc: arg count
 * @argv: arg elements array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]), b = atoi(argv[3]), result, (*func)(int, int);
	char o = *argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	result = func(a, b);
	printf("%d\n", result);
	return (0);
}
