#include "shell.h"

char *error_msn(char *name, int interactions, char *buff)
{
    char str[1024];
    char *error, *inters;

    inters = _itoi(interactions, str);
    error = str_concat(name, ": ");
    error = str_concat(error, inters);
    error = str_concat(error, ": ");
    error = str_concat(error, buff);
    error = str_concat(error, ": ");
    error = str_concat(error, "not found");
    return (error);
}
