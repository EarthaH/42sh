/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 12:44:42 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/01 09:32:50 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (size == 0)
	{
		ft_putstr(E_MESS02);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * size);
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
