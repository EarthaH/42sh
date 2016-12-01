/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 13:54:31 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/11/25 13:54:35 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_matrix	ft_matrix_create(unsigned int x, unsigned int y)
{
	t_matrix		matrix;
	unsigned int	k;

	if (x < 1 || y < 1)
		error("Error: Matrix can't have a zero size.");
	matrix.x = x;
	matrix.y = y;
	if (!(matrix.matrix = (int **)malloc(sizeof(int *) * x)))
		error("Error: Failed to malloc memory for new matrix.");
	ft_bzero(matrix.matrix, sizeof(int *) * x);
	k = 0;
	while (k < x)
	{
		if (!(matrix.matrix[k] = (int *)malloc(sizeof(int) * y)))
			error("Error: Failed to malloc memory for new matrix.");
		ft_bzero(matrix.matrix[k], sizeof(int) * y);
		k++;
	}
	return (matrix);
}
