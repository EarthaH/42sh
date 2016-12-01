/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meckhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/21 10:38:20 by meckhard          #+#    #+#             */
/*   Updated: 2016/10/24 08:48:59 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	if (s1 < s2)
		return ft_memcpy(s1, s2, n);
	if (s1 > s2)	
		ft_memcpy_bwd(s1, s2, n);
	return (s1);
}
