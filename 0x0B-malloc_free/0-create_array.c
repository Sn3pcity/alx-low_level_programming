#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function with parameters to allocate memory
 *@c: char
 *@size: length you want
 *Return: size of mem allocated
 **/

char *create_array(unsigned int size, char c)
{
char *s;
unsigned int a;
s = malloc(sizeof(char c) * size);

for (a = 0; a < size; a++)
{
s[a] = c;
}
if (size == 0 || s == NULL)
{
return (NULL);
}
else
{
return (s);
}

}
