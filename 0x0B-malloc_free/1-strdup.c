#include "main.h"

/**
 *_strdup - function to allocate mem
 *@str: string to copy
 *
 *Return: 0
 **/

char *_strdup(char *str)
{
int a;
char *s;

s = malloc(sizeof(char *str) * size);

for (a = 0; *s != '\0'; a++)
    
