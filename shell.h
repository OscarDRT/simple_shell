#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>


/**
* struct list - Struct list
* @str: string to store
* @next: next position
*/


typedef struct list
{
	char *str;
	struct list *next;

} list_t;

char *get_line(void);
char * _getenv(char *key, char **env);
int _path(char **env);
int lpath(char **env);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
char **tokenizar(char *buff, char *special);
int _setenv(const char *name, const char *value, int overwrite);
int new_process(char **buff, char *name, char *env);

#endif
