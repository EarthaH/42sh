/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 12:56:36 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/02 08:12:52 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = s;
	i = 0;
	if (n == 0)
		ft_putstr(E_MESS03);
	if (s == NULL)
	{
		ft_putstr(E_MESS02);
		return (NULL);
	}
	while (n > 0 && str[i] != '\0' && str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
		n--;
	}
	return (NULL);
}
