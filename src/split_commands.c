#include "../includes/minishell.h"

static int			created_commands(char *command)//, t_env *env)
{
	if (ft_strcmp(command, "echo") == 0)
		return (1);
	if (ft_strcmp(command, "cd") == 0)
		return (2);
	if (ft_strcmp(command, "env") == 0)
		return (3);
	if (ft_strcmp(command, "setenv") == 0)
		return (4);
	if (ft_strcmp(command, "unsetenv") == 0)
		return (5);
	else
		return (-1);
}

static void			validate_commands(char	**commands, t_env *te)
{
	int		type;
	char	*com;

	com = remove_path(commands[0]);
//	com = check_quotes(com);
	commands[0] = com;
	if ((type = created_commands(com)) > 0)
		created_functions(commands, type, te);
//	if (defined_commands(com) == 0)
	else if (type < 0)
		fork_process(commands, te);
	else
	{	
		ft_putstr(M_MESS02);
		ft_putendl(commands[0]);
	}
}

void				created_functions(char **commands, int type, t_env *te)
{
	if (type == 3)
		env(te->envp);
	if (type == 4)
		set_env(te->envp, commands);
}

char				*remove_path(char *command)
{
	int		i;
	int		j;
	char	*temp;
	
	i = ft_strlen(command);
	j = i - 1;
	while (command[j] == '/' && \
		command[j] == ' ' && command[j] && j >= 0)
	{
		j--;
	}
	temp = ft_strsub(command, j + 1, i - j);
	return (temp);
}

void				split_commands(char *line, t_env *te)
{
	char			**commands;
	unsigned int	i;

	i = 0;
	commands = NULL;
	commands = ft_strsplit(line, ' ');
	if (commands != NULL)
	{
		validate_commands(commands, te);
	}	
}
