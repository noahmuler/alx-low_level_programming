#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: arg passed as pointer
 * Return: void
 */
void rev_string(char *s)
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
	for (begin = 0; begin < count; begin++)
		*(s + begin) = r[begin];
}
