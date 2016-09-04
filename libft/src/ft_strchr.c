/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/19 14:23:34 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/02 06:54:29 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	if (s == NULL)
	{
		ft_putstr(E_MESS02);
		return (NULL);
	}
	while (s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
