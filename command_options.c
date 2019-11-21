#include "shell.h"

/**
* ops_exit - close the shell
* @env: the enviroment
* Return: (0) to close
*/

int ops_exit(char **env)
{
	return (0);
}

/**
* ops_env - print the enviroment
* @env: the enviroment
* Return: (1) if work
*/

int ops_env(char **env)
{
	int i = 0;

	while (env[i] != NULL)
	{
		write(STDOUT_FILENO, env[i], _strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (1);
}
