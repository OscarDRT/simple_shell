#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
* tokenizar - separe the words of buffer
* @buff: words to separate
* Return: array with the separated words
*/

char **tokenizar(char *buff, char *special)
{
	char *check, **token = malloc(1024 * sizeof(char *));
	int i;

	if (token == NULL)
		exit(98);
	check = strtok(buff, special);
	for (i = 0; i < 1024 && check != NULL; i++)
	{
		token[i] = check;
		check = strtok(NULL, special);
	}
	token[i] = NULL;
	return (token);
}
