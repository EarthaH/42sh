/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/19 13:07:10 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/07/31 13:00:14 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*cpy;
	size_t	i;

	i = 0;
	if (src == NULL || dest == NULL)
	{
		ft_putstr(E_MESS02);
		return (dest);
	}
	if (ft_strlen(src) != ft_strlen(dest))
	{
		ft_putstr(E_MESS05);
		ft_putstr("Maybe you meant to use ft_memmove or ft_strncpy.\n");
		return (dest);
	}
	while (src[i] && src[i] != '\0' && dest[i] && dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
