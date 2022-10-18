#include <stdio.h>
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
int s;

for (s = 'a'; s <= 'z'; s++)
{
print_alphabet(s);
}
_putchar('\n');
}
