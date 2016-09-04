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
        ft_putendl(envp[i++]);
}

void    set_env(char **envp, char *s)
{
    int     i;
    int     j;

    i = len(envp);
    j = 0;
    while (s[j - 1] != '\0')
    {
        envp[i][j] = s[j];
        j++;
    }
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
    if (argc == 2)
        printf("argv[1] %s\n", argv[1]);
    while (envp[i] != NULL)
    {
        printf("envp: %s\n", envp[i++]);
    }
    return (0);
}
*/
