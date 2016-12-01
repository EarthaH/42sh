/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_identity.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:06:59 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/11/25 14:07:58 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_matrix	ft_matrix_identity(unsigned int size)
{
	t_matrix		iden_mat;
	unsigned int	k;

	iden_mat = ft_matrix_create(size, size);
	k = 0;
	while (k < size)
	{
		iden_mat.matrix[k][k] = 1;
		k++;
	}
	return (iden_mat);
}
