#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, i, li, lli, f;

	c = sizeof(char);
	i = sizeof(int);
	li = sizeof(long int);
	lli = sizeof(long long int);
	f = sizeof(float);

	printf("Size of a char: ", c, " byte(s)\n");
	printf("Size of an int: ", i, " byte(s)\n");
	printf("Size of a king int", li, " byte(s)\n");
	printf("Size of a long long int: ", lli, " byte(s)\n");
	printf("Size of a float: ", f, " byte(s)\n");
	return (0);
}
