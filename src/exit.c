#include "../includes/minishell.h"

void    quit(char *line)
{
	if (line != NULL)
	{
		free(line);
		line = NULL;
	}
    exit(EXIT_SUCCESS);
}
