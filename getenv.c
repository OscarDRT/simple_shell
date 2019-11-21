#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char * _getenv(char *key, char **env)
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
	return(tokkey[1]);
}