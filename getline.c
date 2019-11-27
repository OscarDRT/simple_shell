#define _GNU_SOURCE
#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
* get_line - read a line from
* an input stream.
* Return: buff with the string that read
*/

char *get_line(void)
{
	char *buff = NULL;
	size_t bufsize = 1024;

	if (getline(&buff, &bufsize, stdin) == -1)
	{
		write(1, "\n", 1);
		exit(EXIT_FAILURE);
	}

	return (buff);
}
