#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - print all the element
 * @h: pointer to the head
 * Return: the number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes++);
}
