/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 07:22:35 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/01 07:32:48 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	if (size == 0)
	{
		ft_putstr(E_MESS03);
		return (NULL);
	}
	str = (unsigned char *)malloc(sizeof(unsigned char) * size);
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
