/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/19 12:53:38 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/02 08:13:34 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	cnt;

	cnt = 0;
	if (s1 == NULL)
	{
		ft_putstr(E_MESS02);
		cpy = NULL;
		return (NULL);
	}
	cpy = ft_strnew(ft_strlen(s1) + 1);
	while (s1[cnt] && s1[cnt] != '\0')
	{
		cpy[cnt] = s1[cnt];
		cnt++;
	}
	cpy[cnt] = '\0';
	return (cpy);
}
