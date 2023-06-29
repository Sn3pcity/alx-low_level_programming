#include "main.h"
/**
 *_sqrt_recursion - function to check for squareroot
 *@n: number to get squareroot of
 *Return: 0
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (_sqrt_recursion(n - 1));
}
}
