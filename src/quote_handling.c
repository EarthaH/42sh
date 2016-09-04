#include "../includes/minishell.h"

char	*check_quotes(char *command)
{
	unsigned int	i;
	char			*temp;

	temp = ft_strnew(ft_strlen(command) + 1);
	i = 0;
	while (command[i] != '\0')
	{
		if (command[i] == 34)
		{
			get_dquote()
		}
		if (command[i] == 39)
			;
		temp[i] = command[i];
	}
}
