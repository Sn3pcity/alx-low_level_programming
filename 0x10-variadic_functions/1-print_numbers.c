#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - checks numbers to be printed
 *@n: numbers to be checked
 *@separator: string to be printed between numbers
 *@...: local declarations
 * Return: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int s;
int nos;
va_list sa;

va_start(sa, n);
for (s = 0; s < n; s++)
{
nos = va_arg(sa, int);
printf("%d", nos);

if (separator == NULL)
return;
if (s < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(sa);
}
