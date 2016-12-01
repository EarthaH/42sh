/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_array_push3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 07:58:53 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/11/22 07:58:57 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		**ft_int_array_push3(int **arr, int *line)
{
	int			i;
	int 		**arr2;

	i = -1;
	if (!line)
		return (arr);
	if (!arr)
	{
		arr2 = (int **)malloc(sizeof(int *) * 2);
		arr2[0] = line;
		arr2[1] = NULL;
	}
	else
	{
		while (arr[++i] != NULL)
			;
		arr2 = (int **)malloc(sizeof(int *) * (i + 2));
		i = -1;
		while (arr[++i] != NULL)
			arr2[i] = arr[i];
		arr2[i] = line;
		arr2[i + 1] = NULL;
		free(arr);
	}
	return (arr2);
}
