#include "../includes/minishell.h"

static int  is_line(char *s1, char *s2)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (s1[i] != s2[j] && s1[i++] != '\0');
    while (s1[i] == s2[j] && s1[i++] != '\0' && s1[j++] != '\0');
    if (s2[i] == '\0')
        return (1);
    return (0);
}

static int  len(char **s)
{
    int     i;

    i = 0;
    while (s[i] != NULL)
        i++;
    return (i);
}

void    env(char **envp)
{
    int     i;

    i = 0;
    while (envp[i] != NULL)
        printf("%s\n", envp[i++]);
}

void    set_env(char **envp, char *s)
{
    int     i;

    i = len(envp);
    envp[i] = s;
}

void    unset_env(char **envp, char *s)
{
    int     i;

    while (is_line(envp[i], s) == 0)
        i++;
    if (is_line(envp[i], s) == 1)
        envp[i] = NULL;
    else
        printf("ERROR: env not found !!!");
}
/*
int     main(int ac, char **av, char **envp)
{
    int     i = 0;
    if (ac == 2)
        printf("argv[1] %s\n", av[1]);
    env(envp);
    set_env(envp, "ME=eartha");
    printf("\n\n\t\t\tNEW ENV\n\n");
    env(envp);
    unset_env(envp, "ME");
    printf("\n\n\t\t\tNEW ENV\n\n");
    env(envp);    
    return (0);
}
*/
