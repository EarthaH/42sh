#ifndef MINISHELL_H
# define MINISHELL_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

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
void			created_functions(char **commands, int type);

/*
 * env.c
 */

void			env(char **envp);
void			set_env(char **envp, char *s);
void			unset_env(char **envp, char *s);

/*
 * exit.c
 */

void			quit(char *line);

#endif
