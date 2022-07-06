#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name string
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	void (*fptr)(char *) = f;

	fptr(name);
}
