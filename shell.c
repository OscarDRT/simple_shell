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
	char *newpath;
	char *buffer;
	char **args;
	int status = 1;
	char msn[] = "#cisfun$ ";

	argc = argc;
	argv[1] = argv[1];
	while (status)
	{
		write(STDOUT_FILENO, msn, _strlen(msn));
		buffer = get_line();
		if (_strcmp(buffer, "exit 98") == 0)
			status = 0;
		args = tokenizar(buffer, " \t\n\r");
		status = search(args, argv[0], env);
	}

/*	write(STDOUT_FILENO, "\n", 1);*/
	free(buffer);
	exit(status);
}
