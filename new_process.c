#include "shell.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

/**
 * error_msn - function that prints error message when the command do not exist
 * @buff: the input line that user writ
 * @interactions: number users interactions
 * @name: name of program
 */
void error_msn(char *name, int interactions, char *buff)
{
	char *inters, str[1024];

	inters = _itoi(interactions, str);
	write(STDOUT_FILENO, name, _strlen(name));
	write(STDOUT_FILENO, ": ", _strlen(": "));
	write(STDOUT_FILENO, inters, _strlen(inters));
	write(STDOUT_FILENO, ": ", _strlen(": "));
	write(STDOUT_FILENO, buff, _strlen(buff));
	write(STDOUT_FILENO, ": ", _strlen(": "));
	write(STDOUT_FILENO, "not found\n", _strlen("not found\n"));
}

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
		{
			return (save);
		}
		copy = copy->next;
	}
	copy = head;
	return (buff);
}

/**
* new_process - perfom parent an child procress
* to the shell
* @buff: the input line that user write
* @env: the enviroment
* @interactions: number users interactions
* @name: name of program
* Return: 1 if work, -1 if dont work
*/

int new_process(char **buff, char **env, int interactions, char *name)
{
	pid_t cpid, w;
	int wstatus;
	char *buffer;
	list_t *head;

	cpid = fork();
	if (cpid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	if (cpid == 0)
	{
		buffer = buff[0];
		head = lpath(env);
		buff[0] = searchinlist(head, buffer);

		if (buff[0] == NULL)
			exit(98);
		else if (execve(buff[0], buff, NULL) == -1)
		{
			error_msn(name, interactions, buff[0]);
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
		return (0);
	}
	return (0);
}
