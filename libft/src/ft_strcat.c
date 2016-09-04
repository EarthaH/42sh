/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/29 17:02:01 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/02 08:14:17 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		cnt;
	int		cnt2;

	cnt = ft_strlen(s1);
	cnt2 = 0;
	if (s1 == NULL)
	{
		ft_putstr(E_MESS02);
		return (NULL);
	}
	while (s1[cnt])
	{
		s1[cnt] = s2[cnt2];
		cnt++;
		cnt2++;
	}
	if (cnt2 < ft_strlen(s2))
	{
		ft_putstr(E_MESS01);
		return (NULL);
	}
	return (s1);
}
