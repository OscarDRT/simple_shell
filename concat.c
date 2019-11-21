#include "shell.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * str_concat - prototype
 * @s1: First string
 * @s2: second string
 * Return: concat
 */
char *str_concat(char *s1, char *s2)
{
	int tam1, tam2, tam, i, j;
	char *concat;

    if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	tam1 = _strlen(s1);
	tam2 = _strlen(s2);
	tam = tam1 + tam2;
	concat = malloc(tam + 1 * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0; s1[i]; i++)
	{
		concat[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		concat[j++] = s2[i];
	}
	concat[tam] = '\0';
	return (concat);
}