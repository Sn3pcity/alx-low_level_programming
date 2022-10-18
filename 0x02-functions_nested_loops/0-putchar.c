#include <stdio.h>
/*program to print _putchar*/

int main(void)
{
char *sh = "Holberton";

while (*sh)
{
_putchar(*sh);
sh++;
}
_putchar('\n');
return (0);
}
