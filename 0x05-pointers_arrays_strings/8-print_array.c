#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an inputted number of elements
 *               of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
int sn;

for (sn  = 0; sn < n; sn++)
{
printf("%d", a[sn]);

if (sn == n - 1)
continue;

printf(",");
}

printf("\n");
}
