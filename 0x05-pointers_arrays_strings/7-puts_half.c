#include "main.h"
/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
int sn = 0, ap = 0, n;

while (str[sn++])
ap++;

if ((ap % 2) == 0)
n = ap / 2;

else
n = (ap + 1) / 2;

for (sn = n; sn < ap; sn++)
_putchar(str[sn]);

_putchar('\n');
}
