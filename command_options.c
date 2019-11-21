#include "shell.h"

int ops_exit(char **env)
{
    return (0);
}

int ops_env(char **env)
{
    int i = 0;

    while (env[i] != NULL)
    {
        write(STDOUT_FILENO, env[i], _strlen(env[i]));
        write(STDOUT_FILENO, "\n", 1);
        i++;
    }
    return (1);
}
