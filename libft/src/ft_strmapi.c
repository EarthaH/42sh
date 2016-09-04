/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 08:20:06 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/02 08:20:33 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

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
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
