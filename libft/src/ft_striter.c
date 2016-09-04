/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 07:59:37 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/01 08:08:55 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	i;

	i = 0;
	if (s != NULL)
	{
		while (i < ft_strlen(s))
		{
			(*f)(&s[i]);
			i++;
		}
	}
	else
		ft_putstr(E_MESS02);
}
