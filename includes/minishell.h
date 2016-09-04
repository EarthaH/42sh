#ifndef MINISHELL_H
# define MINISHELL_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

# define M_MESS01 "\eMinishell could not read the command.\n"

/*
 * read_line.c
 */

void			read_line(void);

/*
 * exit.c
 */

void			quit(char *line);

#endif
