#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - print the no of element
 * @h: pointer to head
 * Return: size_t, the no nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
