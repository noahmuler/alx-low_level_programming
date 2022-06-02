#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch, i, li, lli, f;

	ch = sizeof(char);
	i = sizeof(int);
	li = sizeof(long int);
	lli = sizeof(long long int);
	f = sizeof(float);

	printf("Size of a char: %d", ch);
	printf(" byte(s)\n");
	printf("Size of an int: %d", i);
	printf(" byte(s)\n");
	printf("Size of a long int: %d", li);
	printf(" byte(s)\n");
	printf("Size of a long long int: %d", lli);
	printf(" byte(s)\n");
	printf("Size of a float: %d", f);
	printf(" byte(s)\n");
	return (0);
}
