#include "shell.h"

/**
* search - find and execute a function
* @buff: function to find
* @name: name of program
* @env: the enviroment
* Return: a execution of fucntion
*/

int search(char **buff, char **env, int interactions)
{
	int count = 0;
	list_t ops[] = {
		{"env", ops_env, NULL},
		{"exit", ops_exit, NULL},
		{NULL, NULL, NULL}
	};

	/*if the user push enter*/
	if (buff[0] == NULL)
		return (1);
	while (count < 2)
	{
		if (_strcmp((ops[count].str), buff[0]) == 0)
		{
			return ((ops[count].fun)(buff, env));
		}
		count++;
	}

	return (new_process(buff, env, interactions));
}
