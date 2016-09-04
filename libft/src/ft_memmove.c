/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 08:30:27 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/02 08:12:09 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

unsigned char	*ft_realloc(unsigned char *s1, unsigned char *s2)
{
	char			*temp;
	size_t			i;
	size_t			len;

	i = 0;
	temp = (char *)malloc(sizeof(char) * ft_strlen((char *)s2));
	len = ft_strlen(temp);
	ft_bzero(temp, len);
	while (len > 0)
	{
		temp[i] = s1[i];
		i++;
		len--;
	}
	return ((unsigned char *)temp);
}

void			*ft_memmove(void *dst, void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (src == NULL)
		return (dst);
	if ((ft_strlen(src) > ft_strlen(dst)) && (len > ft_strlen(dst)))
		s1 = ft_realloc(s1, s2);
	while (len > 0)
	{
		s1[i] = s2[i];
		i++;
		len--;
	}
	return (dst);
}
