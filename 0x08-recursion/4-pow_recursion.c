#include "main.h"
/**
 *_pow_recursion - function to print power of x
 *@x: parameter to be powered
 *@y: power of x
 *Return: 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
return (_pow_recursion(x, y - 1) * x);
}
}
