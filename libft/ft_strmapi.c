/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/21 11:07:00 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/10/24 08:45:06 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	ptr = ft_strdup(s);
	if (ptr == NULL)
		return (NULL);
	while (ptr[i] != 0)
	{
		ptr[i] = f(i, ptr[i]);
		i++;
	}
	return (ptr);
}
