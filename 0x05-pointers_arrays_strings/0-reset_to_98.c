#include "main.h"
#include <stdio.h>
/**
 *main - checks the code
 *Return always 0
 */
void reset_to_98(int *n)
{
int n;
int *k = &n;
*k = 98;
printf("%d\n", n);
return (0);
}
