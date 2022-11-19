#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - checks numbers to be printed
 *@n:  number of strings passed to the function
 *@separator: string to be printed between numbers
 *@...: local declarations
 * Return: numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)

{
unsigned int s = 0;
char *str;
va_list sa;

if (separator == NULL)
return;
if (s < n - 1)
printf("%s", separator);

va_start(sa, n);
for (s = 0; s < n; s++)
str = va_arg(sa, char*);
{
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}
printf("\n");
va_end(sa);
}
