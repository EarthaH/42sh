#include "../includes/minishell.h"

int    fork_process(char **commands, t_env *te)
{
    pid_t   pid;
    int     status;
    char    *path;

    path = ft_strjoin("/bin/", commands[0]);
    pid = fork();
    if (pid < 0)
        error("Error: fork()");
    if (pid == 0)
    {
        if (execve(path, commands, NULL) < 0)
        {
         ft_putstr("zsh: command not found: "); 
         ft_putendl(commands[0]);
        }
        exit(0);
    }
    else
        wait(0);
    return (status);
}
