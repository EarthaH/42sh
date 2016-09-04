#include "../includes/minishell.h"

void		read_line(void)
{
	char	*line;

	line = NULL;
	ft_putstr(PROMPT);
	if (get_next_line(0, &line) != -1)
	{
		if (line != NULL)
		{
			if (ft_strcmp(line, "exit") == 0 || \
					ft_strcmp(line, "EXIT") == 0)
			quit(line);
			split_commands(line);
		}
		read_line();
	}
	else
	{
		ft_putstr(M_MESS01);
		quit(line);
	}
}
