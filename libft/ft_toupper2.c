#include "libft.h"

void	ft_toupper2(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0' && str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
}
