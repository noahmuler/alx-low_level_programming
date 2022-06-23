#include "main.h"

/**
 * _print_rev_recursion - prints a reversed string
 *
 * @s: char pointer
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char r[1000];
	int begin, end, count = 0;

	while (s[count] != '\0')
		count++;

	end = count - 1;

	for (begin = 0; begin < count; begin++)
	{
		r[begin] = s[end];
		end--;
	}

	r[begin] = '\0';
	printf("%s", r);
}
