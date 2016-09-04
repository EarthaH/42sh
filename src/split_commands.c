#include "../includes/minishell.h"

void		split_commands(char *line)
{
	char	**commands;
	unsigned int	i;

	i = 0;
	commands = NULL;
	commands = ft_strsplit(line, ' ');
	if (commands != NULL)
	{

	}	
}

void		validate_commands(char	**commands)
{
	if (created_commands(commands[0]) == 0)
	if (defined_commands(commands[0]) == 0)
	else
		ft_putstr(M_MESS02);
}
