#include "shell.h"
#include <stdlib.h>
/**
* ops_exit - close the shell
* @env: the enviroment
* @buff: string
* @interactions: number users interactions
* @name: name of program
* Return: (0) to close
*/

int ops_exit(char *name, char **buff, char **env, int interactions)
{
	char env1;
	char *inters, str[1024];

	**env = 49;
	env1 = **env;
	inters = _itoi(interactions, str);
	if (_strcmp(buff[0], "exit") == 0)
	{
		if (buff[1] == NULL)
		{
			free(buff);
			return (env1 - '0');
		}
		else
		{
			if (_atoi(buff[1]) == 0)
			{
				write(STDOUT_FILENO, name, _strlen(name));
				write(STDOUT_FILENO, ": ", _strlen(": "));
				write(STDOUT_FILENO, inters, _strlen(inters));
				write(STDOUT_FILENO, ": ", _strlen(": "));
				write(STDOUT_FILENO, "exit: ", _strlen("exit: "));
				write(STDOUT_FILENO, "Ilegal number: ", _strlen("Ilegal number: "));
				write(STDOUT_FILENO, buff[1], _strlen(buff[1]));
				write(STDOUT_FILENO, "\n", _strlen("\n"));
			}
			else
			{
				return (_atoi(buff[1]));
			}
		}
	}
	return (0);
}

/**
* ops_env - print the enviroment
* @buff: string
* @env: the enviroment
* @interactions: number users interactions
* @name: name of program
* Return: (1) if work
*/

int ops_env(char *name, char **buff, char **env, int interactions)
{
	int i = 0;

	buff = buff;
	interactions = interactions;
	name = name;

	while (env[i] != NULL)
	{
		write(STDOUT_FILENO, env[i], _strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (0);
}

/**
* ops_help - give helpfull information
* @buff: name of help
* @env: environ
* @interactions: number users interactions
* @name: name of program
* Return: if it work
*/

int ops_help(char *name, char **buff, char **env, int interactions)
{
	char msn[] = "This program was developed by Paula Fuentes and Oscar Riaño,\n"
	" as a proposed study project in Holberton Colombia.\n\n"
	"November 2019\n"
	"You are free to download the files and run the program, but please don't cheat.\n"
	"Then use help paula and help oscar\n";
	char pau[] = "Paula fuentes, cohorte 10 Medellin\n"
				"           :):):):)               \n";
	char osc[] = "Oscar Riaño, cohorte 10 Medellin\n"
				"           :):):):)               \n";
	char help[] = "Help: Explanation about the program\n\n"
	"Options:\nhelp paula\nhelp oscar\n";

	env = env;
	buff = buff;
	interactions = interactions;
	name = name;
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
			write(STDOUT_FILENO, "Prove this ", _strlen("Intent this "));
			write(STDOUT_FILENO, buff[1], _strlen(buff[1]));
			write(STDOUT_FILENO, " --help\n", _strlen(" --help\n"));
		}
	}
	return (0);
}
