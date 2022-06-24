#include "main.h"

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument string array
 * Return: int
 */
int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");
	return (0);
}
