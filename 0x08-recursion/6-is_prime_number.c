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
return (_prime(n, n / 2));
}
/**
 *_prime - returns un if n is prime
 *@n: number to be checked
 *@s: number
"*Return: number
 */

int _prime(int n, int s)
{
if (s == 1)
{
return (1);
}
if (n % s == 0)
{
return (0);
}
else
{
return (_prime(n, s - 1));
}
}
