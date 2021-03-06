#include "shell.h"

/**
* search - find and execute a function
* @buff: function to find
* @name: name of program
* @env: the enviroment
* @interactions: numbero of the interactions
* Return: a execution of fucntion
*/

int search(char **buff, char **env, int interactions, char *name)
{
	int count = 0;
	list_t ops[] = {
		{"env", ops_env, NULL},
		{"exit", ops_exit, NULL},
		{"help", ops_help, NULL},
		{NULL, NULL, NULL}
	};

	/*if the user push enter*/
	if (buff[0] == NULL)
		return (0);
	while (ops[count].str != NULL)
	{
		if (_strcmp((ops[count].str), buff[0]) == 0)
		{
			return ((ops[count].fun)(name, buff, env, interactions));
		}
		count++;
	}

	return (new_process(buff, env, interactions, name));
}
