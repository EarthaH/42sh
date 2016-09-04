#include "../includes/minishell.h"

void			split_commands(char *line)
{
	char			**commands;
	unsigned int	i;

	i = 0;
	commands = NULL;
	commands = ft_strsplit(line, ' ');
	if (commands != NULL)
	{

	}	
}

void			validate_commands(char	**commands)
{
	if (created_commands(commands[0]) == 0)
//	if (defined_commands(commands[0]) == 0)
	else
		ft_putstr(M_MESS02);
}

static int		created_commands(char *command)
{
	if (ft_strcmp(command, "echo") == 0)
		;
	if (ft_strcmp(command, "cd") == 0)
		;
	if (ft_strcmp(command, "env") == 0)
		;
	if (ft_strcmp(command, "setenv") == 0)
		;
	if (ft_strcmp(command, "unsetenv") == 0)
		;
}
