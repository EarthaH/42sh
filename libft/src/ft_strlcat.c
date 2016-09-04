/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 15:12:35 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/02 06:46:54 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*d;
	char	*s;
	size_t	k;

	d = (char *)ft_memchr(dst, '\0', size);
	if (d == NULL)
		return (size + ft_strlen(src));
	s = (char *)src;
	k = (size_t)(d - dst) + ft_strlen(s);
	while (((size_t)(d - dst) < size - 1) && (*s != '\0'))
	{
		*d = *s;
		d++;
		s++;
	}
	*d = '\0';
	return (k);
}
