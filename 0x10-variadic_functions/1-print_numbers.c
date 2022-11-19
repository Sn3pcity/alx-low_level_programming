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
unsigned int s = 0;
int nos;
va_list sa;

if (separator == NULL)
return;
if (s < n - 1)
printf("%s", separator);

va_start(sa, n);
for (s = 0; s < n; s++)
nos = va_arg(sa, int);
printf("%d", nos);

printf("\n");
va_end(sa);
}
