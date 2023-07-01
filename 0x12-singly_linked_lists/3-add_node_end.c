#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node at end of linked list
 * @head: 1st node in the list
 * @str: node->str value
 *
 * Return: Address of new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *tmp;

new = malloc(sizeof(size_t));

if (new == NULL)
{
return (NULL);
}

if (str == NULL)
new->str = NULL;
else
new->str = strdup(str);
new->next = NULL;
new->len = 0;

while (new->str[new->len] && str)
new->len++;
if (*head == NULL)
{
*head = malloc(sizeof(size_t));
if (*head == NULL)
{
return (NULL);
}
*head = new;
{
return (*head);
}
}
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = new;
{
return (new);
}
}
