#include "main.h"

/**
 *_islower - checks for lowercase alphabets
 *@c: alphabets to be chacked
 *Return:1 if char is lowercase and 0 uppercase
*/

int _islower(int c)

{
if (c >= 'a' && c <= 'z')
return(0);
else
return(1);
}
