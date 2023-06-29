#include "main.h"
/**
 *is_prime_number - function to check prime number
 *@n: number to check if prime
 *Return: prime
 */
int is_prime_number(int n)
{
if (n == 1)
{
return (0);
}
else
return (is_prime_number(n, n / 2));
}
