/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 10:39:51 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/01 10:42:54 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putendl(const char *str)
{
	if (str == NULL)
		ft_putstr(E_MESS02);
	write(1, str, ft_strlen(str));
	ft_putchar('\n');
}
