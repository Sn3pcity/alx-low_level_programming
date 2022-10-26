#include "main.h"
/**
 * puts2 - prints 1 char out of 2 of a string.
 * @str:string containing chars
 */
void puts2(char *str)
{
int ap = 0, sn = 0;

while (str[ap++])
sn++;

for (ap = 0; ap < sn; ap += 2)
_putchar(str[ap]);

_putchar('\n');
}
