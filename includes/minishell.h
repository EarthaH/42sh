#ifndef MINISHELL_H
# define MINISHELL_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

# define PROMPT	"$> "

# define M_MESS01 "Minishell could not read the command.\n"
# define M_MESS02 "zsh: command not found: "

typedef struct	s_env
{
	char	**envp;
}				t_env;

/*
 * read_line.c
 */

void			read_line(void);

/*
 * split_commands.c
 */

void			split_commands(char *line);
char			*remove_path(char *command);

/*
 * exit.c
 */

void			quit(char *line);

#endif
