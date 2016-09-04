#include "../includes/minishell.h"

static int		created_commands(char *command)//, t_env *env)
{
	if (ft_strcmp(command, "echo") == 0)
		return (0);
	if (ft_strcmp(command, "cd") == 0)
		return (0);
	if (ft_strcmp(command, "env") == 0)
		return (0);
	if (ft_strcmp(command, "setenv") == 0)
		return (0);
	if (ft_strcmp(command, "unsetenv") == 0)
		return (0);
	else
		return (-1);
}

static void			validate_commands(char	**commands)
{
	if (created_commands(commands[0]) == 0)
		;
//	if (defined_commands(commands[0]) == 0)
	else
	{	
		ft_putstr(M_MESS02);
		ft_putendl(commands[0]);
	}
}

void			split_commands(char *line)
{
	char			**commands;
	unsigned int	i;

	i = 0;
	commands = NULL;
	commands = ft_strsplit(line, ' ');
	if (commands != NULL)
	{
		validate_commands(commands);
	}	
}
