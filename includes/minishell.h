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
 * split_commands.c
 */

void			split_commands(char *line);

/*
 * exit.c
 */

void			quit(char *line);

#endif
