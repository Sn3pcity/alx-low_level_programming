#include "main.h"
/**
 * _puts_recursion - Function that checks for string
 *
 *@s: String to be checked
 *return ;zero
 */

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else

return ('\n');
}
