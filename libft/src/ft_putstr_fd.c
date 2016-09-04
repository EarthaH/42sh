/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 08:53:17 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/01 11:26:13 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putstr_fd(const char *str, int fd)
{
	if (str == NULL)
		ft_putstr(E_MESS02);
	write(fd, str, ft_strlen(str));
}
