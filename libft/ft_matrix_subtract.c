/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_subtract.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:17:09 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/11/25 14:17:11 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_matrix	ft_matrix_sub(t_matrix first, t_matrix second)
{
	t_matrix		sum;
	unsigned int	x;
	unsigned int	y;

	if (first.x != second.x || first.y != second.y)
		error("Error: Can't add matricies of diffrent sizes.");
	sum = ft_matrix_create(first.x, first.y);
	x = 0;
	while (x < sum.x)
	{
		y = 0;
		while (y < sum.y)
		{
			sum.matrix[x][y] = first.matrix[x][y] - second.matrix[x][y];
			y++;
		}
		x++;
	}
	return (sum);
}
