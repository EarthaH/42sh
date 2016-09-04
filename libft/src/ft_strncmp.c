/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 11:20:29 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/02 08:16:26 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_diff(char s1, char s2)
{
	int		l;
	int		m;

	l = 0;
	m = 0;
	if (s1 < 0)
		m = 256 + s1;
	else
		m = s1;
	if (s2 < 0)
		l = 256 + s2;
	else
		l = s2;
	return (m - l);
}

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		k;

	k = 0;
	while (s1[k] != '\0' && s2[k] != '\0' && k < n)
	{
		if (s1[k] != s2[k])
			return (ft_diff(s1[k], s2[k]));
		k++;
	}
	if (s1[k] != '\0')
		return (ft_diff(s1[k], 0));
	else if (s2[k] != '\0')
		return (ft_diff(0, s2[k]));
	return (0);
}
