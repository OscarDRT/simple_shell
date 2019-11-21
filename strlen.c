#include "shell.h"

/**
 * _strlen - define the leng of a array
 * @s: array to evaluate
 * Return: (a): the lenght of array
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		++a;
	return (a);
}

