/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_scale.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 12:14:11 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/11/26 12:14:13 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_matrix    ft_matrix_scale(t_matrix c, float scale)
{
//    unsigned int    i;
//    unsigned int    j;
//    t_matrix        m;

    if (c.x == 1 && c.y == 4)
    {
        c.matrix[0][0] *= scale;
        c.matrix[0][1] *= scale;
        c.matrix[0][2] *= scale;
/*        m = ft_matrix_create(4, 4);
        i = -1;
        while (++i <= m.x && (j = -1))
           while (++j <= m.y)
              if (i == j)
                  m.matrix[i][j] = 1 * scale;
        c = ft_matrix_multiply(c, m);
        ft_matrix_destroy(m);*/
    }
    else
        error("Error: Matrices do not align");
    return (c);
}
