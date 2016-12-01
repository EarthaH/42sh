#include "../includes/minishell.h"
#include <stdio.h>

int    fork_process(char **commands, t_env *te)
{
    pid_t   pid;
    int     status;
    char    *path;

    ft_putarr(commands);
    path = ft_strjoin("/bin/", commands[0]);
    path = rm_padding(path);
    printf("path: %s\n", path);
    pid = fork();
//    if (pid < 0)
//        error("Error: fork()");
    if (pid == 0)
    {
        execve(path, commands, te->envp);
        exit(0);
    }
    else
        wait(0);
    return (status);
}
