#include "variadic_functions.h"
/**
 * print_all - prints all the arguments
 * @format: const char const ptr
 * @...: variadic args
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, start = 0;
	va_list ap;
	char *str;

	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{ case 'c':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(ap, int));
			break;
			case 'i':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(ap, double));
			break;
		case's':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			str = va_arg(ap, char *);
			if (str)
			{ printf("%s", str);
			break; }
			printf("(nil)");
			break; }
			i++;
	}
	va_end(ap);
	printf("\n");
}
