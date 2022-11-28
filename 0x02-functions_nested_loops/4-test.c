#include "main.h"

/**
 *_isalpha - checks for char whether letter,lowercase or upperca
 *@c: char to be checked
 *Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 *
 **/

int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') ||
(c >= 'a' && c <= 'z'))
return (1);
else
return (0);
}
