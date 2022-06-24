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
	int i, sum = 0, num = 0;

	if (argc < 3)
		printf("%d\n", 0);
	else if (argc >= 3)
	{
		while (argc-- && argc > 0)
		{
			for (i = 0; argv[argc][i] != 0; i++)
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
			num = atoi(argv[argc]);
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
