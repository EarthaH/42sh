/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 13:46:38 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/09/05 10:57:03 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_first(char *new, char const *s1, int *j)
{
	int		i;

	i = *j;
	while (i < (int)ft_strlen(s1))
	{
		new[i] = s1[i];
		i++;
	}
	*j = i;
	return (new);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	size_t	j;

	i = 0;
	if (s1 == NULL || s2 == NULL)
	{
		ft_putstr(E_MESS02);
		return (NULL);
	}
	new = ft_strnew(ft_strlen(s1) + ft_strlen(s2) - 1);
	new = ft_first(new, s1, &i);
	j = 0;
	while (j < ft_strlen(s2))
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}
