/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_multiply.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:12:05 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/11/25 14:12:06 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_matrix	ft_matrix_multiply(t_matrix first, t_matrix second)
{
	t_mat_mul	var;

	ft_bzero(&var, sizeof(t_mat_mul));
	if (first.y != second.x)
		error("Error: Matricies of diffrent sizes can't be multiplied.");
	var.multiply = ft_matrix_create(first.x, second.y);
	while (var.c < first.x)
	{
		var.d = -1;
		while (++(var.d) < second.y)
		{
			var.k = -1;
			while (++(var.k) < second.x)
				var.sum += first.matrix[var.c][var.k] *
					second.matrix[var.k][var.d];
			var.multiply.matrix[var.c][var.d] = var.sum;
			var.sum = 0;
		}
		var.c++;
	}
	return (var.multiply);
}
