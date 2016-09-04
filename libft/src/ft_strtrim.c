/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 14:00:42 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/02 08:29:30 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	char			*new;
	unsigned int	i;
	size_t			j;

	i = 0;
	if (s == NULL)
	{
		ft_putstr(E_MESS02);
		return (NULL);
	}
	if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
			i++;
	if (s[i] == '\0')
	{
		ft_putstr(E_MESS09);
		return (NULL);
	}
	j = ft_strlen(s) - 1;
	if (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		while ((s[j] == ' ' || s[j] == '\t' || \
					s[j] == '\n') && j < ft_strlen(s))
			j--;
	new = ft_strsub(s, i, (j - (size_t)i));
	return (new);
}
