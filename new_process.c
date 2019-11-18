#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int new_process(char **buff, char *name)
{
	pid_t cpid, w;
	int wstatus;

	cpid = fork();
	if (cpid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	if (cpid == 0)
	{
		if (execve(buff[0], buff, NULL) == -1)
		{
			perror(name);
			return (-1);
		}
	}
	else if (cpid < 0)
    	perror("Shell");
	else
	{                    /* Code executed by parent */
		do
		{
        	w = waitpid(cpid, &wstatus, WUNTRACED);
			if (w == -1)
			{
				perror("waitpid");
				exit(EXIT_FAILURE);
			}
		} while (!WIFEXITED(wstatus) && !WIFSIGNALED(wstatus));
		return (1);
 	}
}