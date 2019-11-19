#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: First string for parameter
 * @s2: Secund string for parameter
 *
 * Return: Always (*s1 - *s2)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char * _getenv(char *key, char **env)
{
	char **tokkey, **copy = env;
	int i;

	for (i = 0; env[i] != NULL; i++)
		copy[i] = env[i];
	copy[i] = NULL;
	for (i = 0; copy[i] != NULL; i++)
	{
		tokkey = tokenizar(*(copy + i), "=");
		if (_strcmp(tokkey[0], key) == 0)
		{
			break;
		}
	}
	return(tokkey[1]);
}

int main(int ac, char **av, char **env)
{
	char *value;

	value = _getenv("SHLVL", env);
	printf("\n");
	printf("\n");
	printf("PATH_ULA es %s\n", value);
	printf("\n");
	printf("\n");
	return(0);
}