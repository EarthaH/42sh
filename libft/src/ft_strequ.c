/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 08:30:05 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/01 09:01:53 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t	i;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
		while ((s1[i] != '\0') == (s2[i] != '\0'))
			i++;
		if (s1[i] == '\0' && s2[i] == '\0')
			return (1);
		else
			return (0);
	}
	else
	{
		ft_putstr(E_MESS02);
		return (0);
	}
}
