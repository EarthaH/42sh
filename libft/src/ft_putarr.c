/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 11:56:01 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/02 08:41:57 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putarr(char **arr)
{
	size_t	i;

	i = 0;
	if (arr != NULL)
	{
		while (ft_strcmp(arr[i], "\0") != 0)
		{
			ft_putendl(arr[i]);
			i++;
		}
	}
	else
		ft_putstr(E_MESS08);
}
