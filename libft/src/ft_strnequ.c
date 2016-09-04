/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 09:00:33 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/01 09:04:04 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
		while (((s1[i] != '\0') == (s2[i] != '\0')) && i < n)
			i++;
		if (s1[i] != s2[i])
			return (0);
		else
			return (1);
	}
	else
	{
		ft_putstr(E_MESS02);
		return (0);
	}
}
