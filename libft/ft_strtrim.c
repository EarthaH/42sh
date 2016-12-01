/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/21 11:18:25 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/10/24 08:34:18 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*str;

	
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while ((s[len - 1] == '\n' || s[len - 1] == '\t' || s[len - 1] == 32))
		len--;
	i = -1;
	while ((s[++i] == '\n' || s[i] == '\t' || s[i] == 32))
		len--;
	if (len <= 0)
		len = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	s += i;
	i = -1;
	while (++i < len)
		str[i] = *s++;
	str[i] = '\0';
	return (str);
}
