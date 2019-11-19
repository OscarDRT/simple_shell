#include "shell.h"
#include <sys/stat.h>
#include <stdlib.h>

char *search(list_t *h, char *buff)
{
	list_t *copy;
	char *save;
	copy = h;
	struct stat st;
	while(copy)
	{
		save = str_concat(copy->str, "/");
		save = str_concat(save, buff);
		if (stat(save, &st) == 0)
		{
			printf("FOUND\n");
			break;
		}
		else
		printf("no FOUND\n");
		copy = copy->next;
	}
	return (save);
}
