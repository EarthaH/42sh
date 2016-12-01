/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 11:56:01 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/02 08:42:25 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putarr_fd(char **arr, int fd)
{
	size_t	i;

	i = 0;
	if (arr != NULL)
	{
		while (ft_strcmp(arr[i], "\0") != 0)
		{
			ft_putendl_fd(arr[i], fd);
			i++;
		}
	}
	else
		ft_putstr(E_MESS08);
}
