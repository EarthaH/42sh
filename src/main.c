#include "../includes/minishell.h"

int		main(int ac, char **av, char **envp)
{
	t_env			te;
	unsigned int	i;

	i = 0;
	if (ac == 1)	
	{
		(void)av;
		te.envp = envp;
		read_line(&te);
	}
	return (0);
}
