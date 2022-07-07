#include "variadic_functions.h"
/**
 * print_strings - prints all the arguments
 * @separator: const char ptr
 * @n: number of args
 * @...: variadic args
 * Return: int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str != NULL)
			printf("%s", str);
		else 
			printf("(nil)");
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
