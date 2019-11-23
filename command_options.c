#include "shell.h"
#include <stdlib.h>
/**
* ops_exit - close the shell
* @env: the enviroment
* Return: (0) to close
*/

int ops_exit(char **buff, char **env)
{
	char env1;

	buff = buff;
	** env = 50;
	env1 = **env;
	return (env1 + '0');
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
	buff = buff;
	env = env;
	char *sig = "-";
	char buffer[1024];
	char *oldpwd, *newpwd;

	if (buff[1] == NULL)
		chdir("/home/");
	else if (buff[1] != sig)
	{
		oldpwd = getcwd(buffer, sizeof(buffer));
		if (chdir(buff[1]) == -1)
		{
			newpwd = str_concat(oldpwd, buff[1]);
			if (chdir(newpwd) == -1)
				perror(buff[1]);
		}
		newpwd = getcwd(buffer, sizeof(buffer));
	}
	return (1);
}