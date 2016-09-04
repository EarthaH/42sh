#include "../includes/minishell.h"

void		read_line(void)
{
	char	*line;

	line = NULL;
	ft_putstr("$> ");
	if (get_next_line(0, &line) != -1)
	{
		if (line != NULL)
		{
			if (ft_strcmp(line, "exit") == 0)
			quit();
//			split_commands(line);
		}
		read_line();
	}
}
