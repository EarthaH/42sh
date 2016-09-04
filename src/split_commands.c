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
		while (ft_strcmp(commands[i], "\0") != 0)
		{
			ft_putendl(commands[i]);
			i++;
		}
	}	
}
