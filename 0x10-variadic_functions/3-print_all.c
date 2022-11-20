#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - FUNCTION PRINTING ALL NUMBERS
 *@format:  list of types of arguments passed to the function
 *@c: char
 *@I: integer
 *@f: float
 *@s: char  (if the string is NULL, print (nil) instead
 *@...: local declarations
 * Return: numbers
 */
void print_all(const char * const format, ...)

{
int s = 0;
char *str;
va_list sa;

va_start(sa, format);

while (format == NULL)
{
printf("\t");
return;
}

while (format[s])
switch (format[s])
{
case 'c':
printf("%c", va_arg(sa, int));
break;
case 'f':
printf("%f", va_arg(sa, int));
case 'i':
printf("%d", va_arg(sa, int));
case 's':
if (sa != NULL)
{
printf("%s", sa);
break;
}
printf("(nil)");
break;
}
s++;
va_end(sa);
printf("\n");
}
