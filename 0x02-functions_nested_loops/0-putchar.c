#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
char *s = "_putchar";

do {
_putchar(*s);
s++;
} while (*s);

_putchar('\n');

return (0);
}
