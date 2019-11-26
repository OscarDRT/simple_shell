#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
* _getenv - gets variable's value of enviroment
* @key: variable to get value
* @env: enviroment
* Return: the value of variable
*/

char *_getenv(char *key, char **env)
{
	char **tokkey, **copy = env;
	int i;

	for (i = 0; copy[i] != NULL; i++)
	{
		tokkey = tokenizar(copy[i], "=");
		if (_strcmp(tokkey[0], key) == 0)
		{
			break;
		}
	}
/*free_grid(tokkey);*/
	return (tokkey[1]);
}
