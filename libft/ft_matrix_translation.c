/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_translation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 13:50:45 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/11/26 13:50:46 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *  The input matrix is a 1*4 matrix [x, y, z, size]
 */

t_matrix    ft_matrix_translation(t_matrix c, int x, int y, int z)
{
    t_matrix    m;

    if (c.x == 1 && c.y == 4)
    {
        m = ft_matrix_create(4, 4);
        m.matrix[0][0] = 1;
        m.matrix[3][0] = x;
        m.matrix[3][1] = y;
        m.matrix[3][2] = z;
        m.matrix[2][3] = 1;
        m.matrix[1][1] = 1;
        m.matrix[2][2] = 1;
        m.matrix[3][3] = 1;
        c = ft_matrix_multiply(c, m);
        ft_matrix_destroy(m);
    }
    else
        error("Error: Matrices do not align");
    return (c);
}
