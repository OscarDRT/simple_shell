#include "shell.h"
#include <stdlib.h>
/**
* ops_exit - close the shell
* @env: the enviroment
* Return: (0) to close
*/

int ops_exit(char **buff, char **env)
{
	int i;
	char env1;

	**env = 48;
	env1 = **env;
	if (_strcmp(buff[0], "exit") == 0)
	{
		i = 0;
		while (buff[i])
			i++;
		if (i == 1 && buff[i + 1] == NULL)
			exit(env1 - '0');
		if (i == 2)
			exit(_atoi(buff[i - 1]));
	}
	return (0);
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

int ops_cd(char **buff, char **env)
{
	env = env;
	char *sig = "-";
	/**
	 * char buffer[1024];
	char *oldpwd;
	char *newpwd;
	oldpwd = getcwd(buffer, sizeof(buffer));
	newpwd = getcwd(buffer, sizeof(buffer));
	*/

	if (buff[1] == NULL)
		chdir("/home/");
	else if (buff[1] != sig)
	{
		if (chdir(buff[1]) == -1)
			perror(buff[1]);
	}
	return (1);
}

