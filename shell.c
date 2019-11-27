#define _GNU_SOURCE
#include "shell.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
* main - execute the shell
* @argc: number of arguemnts
* @argv: store the arguments
* @env: the enviroment
* Return: if it works
*/

int main(int argc, char **argv, char **env)
{
	char *buffer;
	char **args;
	int status = 0, interactions = 0, lenargs = 0;

	argc = argc;
	argv[1] = argv[1];
	while (status == 0)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "#cisfun$ ", _strlen("#cisfun$ "));
		buffer = get_line();
		args = tokenizar(buffer, " \t\n\r");
		while (args[lenargs] != NULL)
			lenargs++;
		interactions++;
		status = search(args, env, interactions, argv[0]);
		if (status == 0)
		{
			free(buffer);
			free(args);
		}
	}
	free(buffer);
	return (0);
}
