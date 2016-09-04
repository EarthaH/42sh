#include "../includes/minishell.h"

void    quit(char *line)
{
	free(line);
	line = NULL;
    exit(EXIT_SUCCESS);
}
