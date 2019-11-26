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
		{
			free(buff);
			return(env1 - '0');
		}
		if (i == 2)
		{
			free(buff);
			return(_atoi(buff[i - 1]));
		}
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

int ops_help(char **buff, char **env)
{
	env = env;
	buff = buff;
	char *msn = "This program was developed by Paula Fuentes and Oscar Riaño,"
	" as a proposed study project in Holberton Colombia.\n\n"
	"November 2019\n"
	"You are free to download the files and run the program, but please don't cheat.\n"
	"Then use help paula and help oscar\n";
	char *pau = "Paula fuentes, cohorte 10 Medellin\n"
				"           :):):):)               \n";
	char *osc = "Oscar Riaño, cohorte 10 Medellin\n"
				"           :):):):)               \n";
	char *help = "Help: Explanation about the program\n\n"
	"Options:\nhelp paula\nhelp oscar\n";

	if (buff[1] == NULL)
		write(STDOUT_FILENO, msn, _strlen(msn));
	else
	{
		if (!(_strcmp(buff[1], "paula")) || !(_strcmp(buff[1], "Paula")))
			write(STDOUT_FILENO, pau, _strlen(pau));
		else if (!(_strcmp(buff[1], "oscar")) || !(_strcmp(buff[1], "Oscar")))
			write(STDOUT_FILENO, osc, _strlen(osc));
		else if (!(_strcmp(buff[1], "help")))
			write(STDOUT_FILENO, help, _strlen(help));
		else
		{
			write(STDOUT_FILENO, "Prove this ",_strlen("Intent this "));
			write(STDOUT_FILENO, buff[1], _strlen(buff[1]));
			write(STDOUT_FILENO, " --help\n", _strlen(" --help\n"));
		}
	}
	return (1);
}

/**
int ops_cd(char **buff, char **env)
{
	env = env;
	char *new;
	char sig = '-';

	if(buff[1] == NULL)
		chdir("/home/");
	else if(buff[1][0] == sig)
	{
		newpwd =
		printf("Entro\n");
	}
	else
	{
		chdir(buff[1]);
	}
	return (1);
}
*/