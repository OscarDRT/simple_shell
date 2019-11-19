#include <stdio.h>
#include <stdlib.h>
#include "shell.h"

int lpath(char **env)
{
	char *key = "PATH";
	char *st;
	char **token;
	int i = 0;
	list_t *head;

	head = NULL;
	st = _getenv(key, env);
	token = tokenizar(st, ":");

	while (token[i] != NULL)
	{
		add_node_end(&head, token[i]);
		i++;
	}

	print_list(head);
	return (0);
}

int main(int ac, char **av, char **env)
{
	lpath(env);
	return 0;
}
