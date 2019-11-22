#include "shell.h"

/**
* ops_exit - close the shell
* @env: the enviroment
* Return: (0) to close
*/

int ops_exit(char **buff, char **env)
{
	int env1;

	**env = 48;
	env1 = _atoi(buff[1]);
	return (env1);
}


/**
* ops_env - print the enviroment
* @env: the enviroment
* Return: (1) if work
*/

int ops_env(char **buff, char **env)
{
	int i = 0;
	buff = buff;

	while (env[i] != NULL)
	{
		write(STDOUT_FILENO, env[i], _strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (1);
}
