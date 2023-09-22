#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees linked list
 * @head: list_t list to free
 */

void free_list(list_t *head)
{
	list_t *tp;

	while (head)
	{
		tp = head->next;
		free(head->str);
		free(head);
		head = tp;
	}
}
