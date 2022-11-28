#include <stdio.h>

/**
 * premain - function that executes before main
 * __attribute__ -  alias for another symbol
 * constructor - function called before execution of main
 */

void __attribute__ ((constructor)) premain()

{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
