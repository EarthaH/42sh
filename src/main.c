#include "../includes/minishell.h"

int		main(int ac, char **av, char **envp)
{
	t_env	env;

	if (ac == 1)	
	{
		(void)av;
		env.envp = envp;
		read_line();
	}
	return (0);
}
