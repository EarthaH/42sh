/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 10:39:51 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/01 11:26:08 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putendl_fd(const char *str, int fd)
{
	if (str == NULL)
		ft_putstr(E_MESS02);
	write(fd, str, ft_strlen(str));
	ft_putchar_fd('\n', fd);
}
