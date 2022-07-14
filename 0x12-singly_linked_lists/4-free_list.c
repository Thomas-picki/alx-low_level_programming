#include "lists.h"
/**
 * free_list - frees a list 
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *place_holder;

	while (head)
	{
		if (head->str)
			free(head->str);
		
		place_holder = head;
		head = head->next;

		free(place_holder);
	}
}
