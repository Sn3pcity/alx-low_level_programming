#include "main.h"
#include <stdio.h>
/**
 *rev_string - Reverses a string.
 *@s: String to be reversed
 */

void rev_string(char *s)
{
int sn = 0, index = 0;
char xyz;
while (s[index++])
sn++;

for (index = sn - 1; index >= sn / 2; index--)
{
xyz = s[index];
s[index] = s[sn - index - 1];
s[sn - index - 1] = xyz;
}
}
