#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
/**
* struct list - Struct list
*
* @str: The operator
* @len: The function associated
* @next: next position
*/


typedef struct list
{
	char *str;
	struct list *next;

} list_t;

char *get_line(void);
char *_getenv(char *key);
int _path(char **env);
int lpath(char **env);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
char **tokenizar( char *buff);
int _setenv(const char *name, const char *value, int overwrite);
int new_process(char **buff, char *name);

#endif