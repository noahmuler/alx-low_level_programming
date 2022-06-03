#include <stdio.h>
#include <time.h>

/**
 * main - Entry Point
 *
 * Return: AAlways 0 (Success)
 */
int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("The number is negative\n");
	else if (n == 0)
		printf("The number is zero\n");
	else
		printf("The number is positive\n");
	return (0);
}
