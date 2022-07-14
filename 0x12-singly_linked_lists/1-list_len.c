#include <stdlib.h>
#include "lists.h"
/**
 * list_len - print the numberofelement
 * @h: pointer tothe head node
 * Return: size_t,the no of node
 */
size_t list_len(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
