/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 07:49:23 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/02 08:02:49 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = b;
	if (b == NULL)
		return (NULL);
	if (len > ft_strlen(b))
	{
		ft_putstr(E_MESS01);
		return (NULL);
	}
	while (len > 0)
	{
		str[i] = c;
		i++;
		len--;
	}
	if (!(str[i + 1]))
	{
		ft_putstr(E_MESS05);
		return (NULL);
	}
	return (b);
}
