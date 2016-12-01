/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_z_rotation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:27:00 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/11/25 15:27:01 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *  The input matrix is a 1*4 matrix [x, y, z, size]
 */

t_matrix    ft_z_rotation(t_matrix c, float beta)
{
    t_matrix    m;

    if (c.x == 1 && c.y == 4)
    {
        m = ft_matrix_create(4, 4);
        m.matrix[0][0] = cos(beta);
        m.matrix[0][1] = sin(beta);
        m.matrix[1][0] = -sin(beta);
        m.matrix[1][1] = cos(beta);
        m.matrix[2][2] = 1;
        m.matrix[3][3] = 1;
        c = ft_matrix_multiply(c, m);
        ft_matrix_destroy(m);
    }
    else
        error("Error: Matrices do not align");
    return (c);
}
