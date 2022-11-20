#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sums everything
 *@n: number to be added.
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list sa; /**
*To access unnamed arguments**/
unsigned int s;
int sum = 0;

va_start(sa, n);/**
*1st argument is va_list & 2nd is no. of arguments to be passed on func
**/
for (s = 0; s < n; s++)
sum += va_arg(sa, int);

if (n == 0)
return (0);

va_end(sa);
return (sum);
}
