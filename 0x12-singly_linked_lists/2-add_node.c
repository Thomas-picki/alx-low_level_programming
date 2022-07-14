#include <stdlib.h>
#include <string.h>
#include "strlen.c"
#include "lists.h"
/**
 * add_node - add a new node
 * @new_head: addressof node
 * @str: newnodetoadd
 * return:address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node_ptr = malloc(sizeof(list_t));

	new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
	{
		return (NULL);
	}
	else
	{
		new_head->str = strdup(str);
		new_head->len = length;
		new_head->next = *head;
		*head = new;
		return (new_head);
	}
}

