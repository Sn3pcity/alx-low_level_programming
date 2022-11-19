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

if (n == 0)
return (0);
va_start(sa, n);
for (s = 0; s < n; s++)
sum += va_arg(sa, int);

va_end(sa);
return (sum);
}
