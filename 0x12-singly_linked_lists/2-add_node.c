#include "lists.h"

/**
 * add_node - add a new node at the beginning of the list_t list
 * @head: pointer to the first node
 * @str: entry string for new node
 * Return: address of new element
*/
list_t *add_node(list_t **head, const char *str)

{
list_t *temp;
temp = NULL;
temp = malloc(sizeof(list_t));
if (!temp)
{
return (NULL);
}
temp->str = strdup(str);
temp->len = len_str(str);
temp->next = *head;

*head = temp;
return (temp);
}

/**
 * len_str - find string length
 * @str: entry string
 * Return: string length
 */

int len_str(const char *str)
{
int i;

for (i = 0; str[i]; i++)
;
return (i);
}
