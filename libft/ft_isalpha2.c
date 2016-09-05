#include "libft.h"

int		ft_isalpha2(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0' && str[i])
	{
		if ((str[i] >= 97 && str[i] <= 122) || \
				(str[i] >= 65 && str[i] <= 90))
			i++;
		else
			return (-1);
	}
	return (0);
}
