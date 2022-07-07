#include "variadic_functions.h"
/**
 * print_numbers - prints all the arguments
 * @separator: const char ptr
 * @n: number of args
 * @...: variadic args
 * Return: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
