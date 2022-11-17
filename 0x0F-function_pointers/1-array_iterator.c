#include <stdlib.h>
/**
 * array_iterator -  a function that executes a function given as
 * a parameter on each element of an array.
 * @array: pointer to array
 * @size: Size of array
 * @action: function to iterate through array
 * Return: zero
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
unsigned int i = 0;

if (action == 0 || array == 0)
return;

for (; i < size; i++)
action(array[i]);
}
