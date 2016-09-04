/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 09:05:28 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/01 13:45:50 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	sub = ft_strnew(len);
	if (s == NULL || len == 0)
	{
		ft_putstr(E_MESS02);
		ft_putstr(E_MESS03);
		return (NULL);
	}
	if (((size_t)start > ft_strlen(s)) || ((size_t)start + len) > ft_strlen(s))
	{
		ft_putstr(E_MESS01);
		return (NULL);
	}
	while (i < len)
	{
		sub[i] = s[(size_t)start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
