#include "shell.h"

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
