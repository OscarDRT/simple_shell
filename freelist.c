#include "shell.h"

/**
 * free_list - function that free the list
 * @head: beginning of list
 */

void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr != NULL)
	{
		free(head->str);
		free(head);
		head = ptr->next;
		ptr = ptr->next;
	}
	free(head);
}

