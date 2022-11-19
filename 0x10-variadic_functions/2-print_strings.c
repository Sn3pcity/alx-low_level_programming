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

va_start(sa, n);/** *The first is the variable declared of the type va_list & 2nd is name of the last named parameter of the function in this it being n**/
for (s = 0; s < n; s++)
{
str = va_arg(sa, char*);/** *The first argument to va_arg is the va_list and the second is the type of the next argument passed to the function.**/
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
va_end(sa);/** *must be called on the va_list before the function returns. (It is not required to read in all the arguments.)**/
}
