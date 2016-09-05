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

void			read_line(t_env *te);

/*
 * split_commands.c
 */

void			split_commands(char *line, t_env *te);
char			*remove_path(char *command);
void			created_functions(char **commands, int type, t_env *te);

/*
 * env.c
 */

void			env(char **envp);
void			set_env(char **envp, char **commands);
void			unset_env(char **envp, char *s);

/*
 * re_malloc.c
 */

char			**re_2d_malloc(char **arr, size_t size);
char			***re_3d_malloc(char ***arr, size_t size);

/*
 * exit.c
 */

void			quit(char *line);

#endif
