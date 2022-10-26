#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *s;
int len;

*s = "My first strlen!";
len = _strlen(*s);
printf("%d\n", len);
return (0);
}
