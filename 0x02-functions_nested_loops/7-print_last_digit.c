#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
int s = n % 10;

if (s < 0 )
s *= -1;
_putchar(s + '0');

return (s);
}
