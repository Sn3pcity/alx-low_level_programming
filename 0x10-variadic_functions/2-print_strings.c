#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - checks numbers to be printed
 *@n:  number of strings passed to the function
 *@separator: string to be printed between numbers
 *@...: local declarations
 * Return: numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)

{
unsigned int s;
char *str;
va_list sa;/** *variable(sa) to access the unnamed arguments**/

va_start(sa, n);
/** *1st is var on va_list&2nd is name of last named parameter of function**/
for (s = 0; s < n; s++)
{
str = va_arg(sa, char*);
/** *1st argument is va_list,2nd is type of nxt argument passed to function.**/
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (separator == NULL)
return;
if (s < n - 1)
printf("%s", separator);
}

printf("\n");
va_end(sa);/** *must be called on va_list b4 the function returns.**/
}
