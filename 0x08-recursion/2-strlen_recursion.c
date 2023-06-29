#include "main.h"
/**
 *_strlen_recursion - function to length of string
 *@s: pointer string to be checked
 *Return: zero
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (_strlen_recursion(s + 1) + 1);
}
else
return (0);
}
