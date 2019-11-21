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
	int status = 1;
	char msn[] = "#cisfun$ ";

	argc = argc;
	argv[1] = argv[1];
	while (status == 1)
	{
		write(STDOUT_FILENO, msn, _strlen(msn));
		buffer = get_line();
		args = tokenizar(buffer, " \t\n\r");
		status = search(args, argv[0], env);
	}
	free(buffer);
	exit(status);
}
