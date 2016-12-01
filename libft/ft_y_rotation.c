/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_y_rotation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:20:36 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/11/25 15:20:45 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *  The input matrix is a 1*4 matrix [x, y, z, size]
 */

t_matrix    ft_y_rotation(t_matrix c, float beta)
{
    t_matrix    m;

    if (c.x == 1 && c.y == 4)
    {
        m = ft_matrix_create(4, 4);
        m.matrix[0][0] = cos(beta);
        m.matrix[0][2] = -sin(beta);
        m.matrix[1][1] = 1;
        m.matrix[2][0] = sin(beta);
        m.matrix[2][2] = cos(beta);
        m.matrix[3][3] = 1;
        c = ft_matrix_multiply(c, m);
        ft_matrix_destroy(m);
    }
    else
        error("Error: Matrices do not align");
    return (c);
}
