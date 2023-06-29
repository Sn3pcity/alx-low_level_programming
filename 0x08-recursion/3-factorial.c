#include "main.h"
/**
 *factorial - function to print factorial of n
 *@n: pointer string
 *Return: 0
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
else
{
return (factorial(n - 1) * n);
}
