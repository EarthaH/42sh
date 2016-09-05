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
    unsigned int	i;
	char			temp;
	char			**arr;

    i = 0;
	while (envp[i] != NULL)
        ft_putendl(envp[i++]);
//	if ((temp = set_env(commands)) != NULL)
}

void	set_env(char **envp, char **commands)
{
    unsigned int	i;

	i = len(envp);
	if ((ft_isalpha2(commands[1]) == 0) && (commands[1] != NULL))
	{
		ft_toupper2(commands[1]);
		if (commands[2] != NULL)
		{
			commands[1] = ft_strjoin(commands[1], "=");
			commands[1] = ft_strjoin(commands[1], commands[2]);
		}
		envp[i] = ft_strdup(commands[1]);
		envp[i + 1] = NULL;
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
