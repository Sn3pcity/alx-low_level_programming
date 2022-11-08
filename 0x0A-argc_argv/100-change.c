#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -prints min no of coins making change for an amount of money
 * @argc: argument counter
 * @argv: argument values
 * Return: 1 if no of arguments passed is not exact or 0 in otherwise
*/

int main(int argc, char **argv)
{
int a, coins = 0;
if (argc == 2)
{
a = atoi(argv[1]);
if (a < 0)
{
printf("%d\n", 0);
return (0);
}
if (a % 25 >= 0)
{
coins += a / 25;
a = a % 25;
}
if (a % 10 >= 0)
{
coins += a / 10;
a = a % 10;
}
if (a % 5 >= 0)
{
coins += a / 5;
a = a % 5;
}
if (a % 2 >= 0)
{
coins += a / 2;
a = a % 2;
}
if (a % 1 >= 0)
coins += a;
printf("%d\n", coins);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
