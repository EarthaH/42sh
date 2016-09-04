/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 08:10:45 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/07/28 11:22:54 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (s2 == NULL)
		return (dst);
	if (ft_strlen(dst) != ft_strlen(src))
	{
		ft_putstr(E_MESS05);
		return (dst);
	}
	while (n > 0)
	{
		s1[i] = s2[i];
		i++;
		n--;
	}
	return (dst);
}
