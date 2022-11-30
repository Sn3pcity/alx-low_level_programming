#include "main.h"

/**
 * _isupper - Function checking uppercase characters
 * @c: Input character
 * Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
char s = 'A';
int j = 0;

for (; s <= 'Z'; s++)
{
if (c == s)
{
j = 1;
break;
}

}

return (j);
}
