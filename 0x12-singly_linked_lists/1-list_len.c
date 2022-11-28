#include "lists.h"

/**
 * list_len - number of elements of a linked list
 * @h: Singly linked list head
 * Return: nmber of elements
 */

size_t list_len(const list_t *h)

{
unsigned int n_elements;
n_elements = 0;

while (h)
{
n_elements++;
h = h->next;
}
return (n_elements);
}
