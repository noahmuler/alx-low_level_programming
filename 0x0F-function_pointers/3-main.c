#include "3-calc.h"
/**
 * main - Entry Point
 * @argc: arg count
 * @argv: arg elements array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]), b = atoi(argv[3]), result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	result = (*get_op_func(argv[2]))(a, b);
	printf("%d\n", result);
	return (0);
}
