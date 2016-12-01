/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/21 10:32:25 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/10/22 10:50:19 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	char		tmp;
	char		*tmp2;

	tmp = (unsigned char)c;
	tmp2 = (char*)s1;
	while (n--)
	{
		if (*tmp2 == tmp)
			return (tmp2);
		tmp2++;
	}
	return (NULL);
}
