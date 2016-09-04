/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 08:04:44 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/02 08:12:27 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	if (s == NULL)
	{
		ft_putstr(E_MESS02);
	}
	if (n > ft_strlen(s))
	{
		ft_putstr(E_MESS01);
		exit(EXIT_FAILURE);
	}
	while (n > 0)
	{
		str[i] = '\0';
		i++;
		n--;
	}
}
