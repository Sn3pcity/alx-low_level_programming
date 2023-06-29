#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: A pointer string in the rev_recursion func
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
