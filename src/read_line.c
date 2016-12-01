#include "../includes/minishell.h"

void		read_line(t_env *te)
{
	char	*line;

	line = NULL;
	ft_putstr(PROMPT);
	if (get_next_line(0, &line) > 0)
	{
		line = rm_padding(line);
		if (line != NULL)
		{
			if (ft_strcmp(line, "exit") == 0 || \
					ft_strcmp(line, "EXIT") == 0)
			quit(line);
			split_commands(line, te);
		}
		read_line(te);
	}
	else
	{
		ft_putstr(M_MESS01);
		quit(line);
	}
}
