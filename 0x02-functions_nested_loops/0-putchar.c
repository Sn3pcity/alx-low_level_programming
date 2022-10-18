#include <main.h>
/*program to print _putchar*/

int main(void)
{
char *sh = "_putchar";

while (*sh)
{
_putchar(*sh);
sh++;
}
_putchar('\n');
return (0);
}
