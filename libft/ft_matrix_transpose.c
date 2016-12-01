/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_transpose.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:22:32 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/11/25 14:22:46 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_matrix	ft_matrix_transpose(t_matrix source)
{
	t_matrix		new_mat;
	unsigned int	x;
	unsigned int	y;

	new_mat = ft_matrix_create(source.y, source.x);
	x = 0;
	while (x < new_mat.x)
	{
		y = 0;
		while (y < new_mat.y)
		{
			new_mat.matrix[x][y] = source.matrix[y][x];
			y++;
		}
		x++;
	}
	return (new_mat);
}
