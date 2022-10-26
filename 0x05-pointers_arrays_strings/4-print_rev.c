#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
int sn = 0, index;

while (s[index++])
sn++;

for (index = sn - 1; index >= 0; index--)
_putchar(s[index]);

_putchar('\n');
}
