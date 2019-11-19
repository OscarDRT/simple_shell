#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shell.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: beginning of list
 * @str: string for duplicated
 * Return: temp or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;


	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}