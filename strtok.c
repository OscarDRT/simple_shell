#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char **tokenizar( char *buff)
{
	char *check, **token = malloc(1024 * sizeof(char *));
	int i;

	if (token == NULL)
		exit(98);
	check = strtok(buff, " \t\n\r");
	for (i = 0; i < 1024 && check != NULL; i++)
	{
		token[i] = check;
		check = strtok(NULL, " \t\n\r");
	}
	token[i] = NULL;
	free(token);
	return (token);
}
