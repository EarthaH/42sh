/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 08:09:41 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/01 08:28:38 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;

	i = 0;
	if ((str = ft_strnew(ft_strlen(s))) == NULL)
	{
		ft_putstr(E_MESS03);
		return (NULL);
	}
	if (s == NULL)
	{
		ft_putstr(E_MESS02);
		return (NULL);
	}
	while (i < ft_strlen(s))
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
