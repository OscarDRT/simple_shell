#include "shell.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

/**
* searchinlist - search in the linked list of paths
* @head: head pointer of linked list
* @buff: what the user write in the console
* Return: the complete path if exist
*/

char *searchinlist(list_t *head, char *buff)
{
	list_t *copy = head;
	char *save;
	struct stat st;

	while (copy)
	{
		save = str_concat(copy->str, "/");
		save = str_concat(save, buff);
		if (stat(save, &st) == 0)
			break;
		copy = copy->next;
	}
	copy = head;
	return (save);
}

/**
* new_process - perfom parent an child procress
* to the shell
* @buff: the input line that user write
* @name: name of program
* @env: the enviroment
* Return: 1 if work, -1 if dont work
*/

int new_process(char **buff, char *name, char **env)
{
	pid_t cpid, w;
	int wstatus, flag1 = 0, flag2 = 0;
	struct stat st;
	char *buffer;
	list_t *head;

	cpid = fork();
	if (cpid == -1)
		perror("fork"), exit(EXIT_FAILURE);
	if (cpid == 0)
	{
		if (stat(buff[0], &st) == 0)
			flag1 = 1;
		flag2 = flag1;
		if (flag2 < 1)
		{
			buffer = buff[0];
			head = lpath(env);
			buff[0] = searchinlist(head, buffer);
		}
		if (buff[0] == NULL)
			exit(98);
		else if (execve(buff[0], buff, NULL) == -1)
		{
			perror(name);
			exit(EXIT_FAILURE);
		}
		return (wstatus);
	}
	else if (cpid < 0)
	perror("Shell");
	else
	{                    /* Code executed by parent */
		do {
			w = waitpid(cpid, &wstatus, WUNTRACED);
			if (w == -1)
				perror("waitpid"), exit(EXIT_FAILURE);
		} while (!WIFEXITED(wstatus) && !WIFSIGNALED(wstatus));
		return (1);
	}
	return (1);
}
