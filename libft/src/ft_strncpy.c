/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/19 13:22:18 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/01 14:19:09 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dest == NULL)
	{
		ft_putstr(E_MESS02);
		return (NULL);
	}
	if (src == NULL)
		return (dest);
	while (src[i] && dest[i] && len > 0)
	{
		dest[i] = src[i];
		i++;
		len--;
	}
	if (ft_strlen(src) < ft_strlen(dest))
	{
		while (len > 0 && dest[i])
		{
			dest[i++] = '\0';
			len--;
		}
	}
	return (dest);
}
