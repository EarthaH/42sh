/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_destroy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:04:12 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/11/25 14:04:14 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_matrix_destroy(t_matrix matrix)
{
	unsigned int	k;

	if (matrix.matrix == NULL || matrix.x < 1 || matrix.y < 1)
		return (-1);
	k = 0;
	while (k < matrix.x)
	{
		free(matrix.matrix[k]);
		k++;
	}
	free(matrix.matrix);
	return (1);
}

t_matrix	ft_matrix_clear(t_matrix matrix)
{
	ft_matrix_destroy(matrix);
	ft_bzero(&matrix, sizeof(t_matrix));
	return (matrix);
}
