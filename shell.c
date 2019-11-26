#include "shell.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>

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
	int status = 1, interactions = 0, lenargs = 0;
	char msn[] = "#cisfun$ ";

	argc = argc;
	argv[1] = argv[1];
	while (status == 1)
	{
		write(STDOUT_FILENO, msn, _strlen(msn));
		buffer = get_line();
		args = tokenizar(buffer, " \t\n\r");
		while (args[lenargs] != NULL)
			lenargs++;
		interactions++;
		status = search(args, env, interactions, argv[0]);
	}
	free(buffer);
	exit(status);
}
