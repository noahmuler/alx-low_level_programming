#ifndef _3_function_like_macro_h
#define _3_function_like_macro_h

#include "3-function_like_macro.h"
/**
 * ABS - absoulte value
 * @x: double arg
 * Return: double
 */
double ABS(double x)
{
	if (x < 0)
		return ((-1) * (x));
	else
		return (x);
}
#endif
