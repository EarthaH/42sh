/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_to_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 08:05:21 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/11/22 08:05:24 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     *ft_array_to_int(char **arr)
{
    int     *arr2;
    int     i;

    if (!arr)
        return (NULL);
    i = ft_strlen2(arr);
    arr2 = (int *)malloc(sizeof(int) * (i - 1));
    i = -1;
    while (arr[++i] != NULL)
        arr2[i] = ft_atoi(arr[i]);
    return (arr2);
}
