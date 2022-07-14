#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - add a new node
 * @new_head: addressof node
 * @str: newnodetoadd
 * return:address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	
	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
		
		head->str = strdup(str);
		head->len = _strlen(str);
		head->next = *head;
		*head = temp;
		return (temp);
	}
	return (0);
}
/**
 * _strlen - return the length
 * @s: string to count
 * return: string length
 */
int _strlen(const char *s)
{
	int x = 0;

	while (*s)
	{
		s++;
		x++;
	}
	return (x);
}

